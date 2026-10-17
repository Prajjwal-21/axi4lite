// -----------------------------------------------------------------------------
// axi_lite_crossbar.sv
//
// Parameterizable NMST x NSLV AXI4-Lite crossbar.
//
//   * per-master port : independent AW/W buffering, AR capture, decode,
//                       <=1 outstanding read and <=1 outstanding write
//   * per-slave port  : independent round-robin read and write arbiters,
//                       channel mux, owner tracking, response routing
//   * target NSLV     : internal error target (DECERR) so the invalid-address
//                       case traverses the same datapath as a real slave
//
// There is one more target internally than there are exposed slave ports: the
// extra target is the error slave. Hence the internal arrays are sized
// [NTGT-1:0] with NTGT = NSLV + 1, while only [NSLV-1:0] is exposed.
//
// GRANT/RESPONSE CONCENTRATION
//   Each of the NTGT slave ports produces its own grant and owner-routed
//   response vectors. These are combined with a plain OR per master. That is
//   sound only because a master's request vector is one-hot, so at most one
//   target can ever hold a grant for a given master. The invariant
//   (ap_at_most_one_target_gnt / ap_at_most_one_target_rgnt) is asserted and is
//   proved in formal/routing.sby; it is not simply assumed.
//
// See docs/architecture.md for the microarchitecture description and
// docs/protocol_assumptions.md for the protocol subset and its limits.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axi_lite_crossbar #(
    parameter int unsigned ADDR_WIDTH = `AXIL_ADDR_WIDTH,
    parameter int unsigned DATA_WIDTH = `AXIL_DATA_WIDTH,
    parameter int unsigned NMST       = `AXIL_NMST,
    parameter int unsigned NSLV       = `AXIL_NSLV,
    parameter int unsigned REGION_LSB = `AXIL_REGION_LSB,
    // Flat concatenation of NSLV region bases:
    //   BASE_FLAT[i*ADDR_WIDTH +: ADDR_WIDTH] is the base of slave i.
    // A flat vector is used instead of a packed array because Yosys cannot parse
    // packed-array module parameters.
    // Default: the address map of rtl/axil_defs.svh (see `AXIL_BASE_FLAT_3).
    parameter logic [NSLV*ADDR_WIDTH-1:0] BASE_FLAT = `AXIL_BASE_FLAT_3
) (
    input  logic clk,
    input  logic rst,

    // ---------------------------------------------------------------------
    // Master-side AXI4-Lite ports (each entry is one master)
    // ---------------------------------------------------------------------
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_awaddr,
    input  logic [NMST-1:0][2:0]              m_axil_awprot,
    input  logic [NMST-1:0]                   m_axil_awvalid,
    output logic [NMST-1:0]                   m_axil_awready,

    input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_wdata,
    input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_axil_wstrb,
    input  logic [NMST-1:0]                   m_axil_wvalid,
    output logic [NMST-1:0]                   m_axil_wready,

    output logic [NMST-1:0][1:0]              m_axil_bresp,
    output logic [NMST-1:0]                   m_axil_bvalid,
    input  logic [NMST-1:0]                   m_axil_bready,

    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_araddr,
    input  logic [NMST-1:0][2:0]              m_axil_arprot,
    input  logic [NMST-1:0]                   m_axil_arvalid,
    output logic [NMST-1:0]                   m_axil_arready,

    output logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_rdata,
    output logic [NMST-1:0][1:0]              m_axil_rresp,
    output logic [NMST-1:0]                   m_axil_rvalid,
    input  logic [NMST-1:0]                   m_axil_rready,

    // ---------------------------------------------------------------------
    // Slave-side AXI4-Lite ports (each entry is one real slave region)
    // ---------------------------------------------------------------------
    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_awaddr,
    output logic [NSLV-1:0][2:0]              s_axil_awprot,
    output logic [NSLV-1:0]                   s_axil_awvalid,
    input  logic [NSLV-1:0]                   s_axil_awready,

    output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_wdata,
    output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_axil_wstrb,
    output logic [NSLV-1:0]                   s_axil_wvalid,
    input  logic [NSLV-1:0]                   s_axil_wready,

    input  logic [NSLV-1:0][1:0]              s_axil_bresp,
    input  logic [NSLV-1:0]                   s_axil_bvalid,
    output logic [NSLV-1:0]                   s_axil_bready,

    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_araddr,
    output logic [NSLV-1:0][2:0]              s_axil_arprot,
    output logic [NSLV-1:0]                   s_axil_arvalid,
    input  logic [NSLV-1:0]                   s_axil_arready,

    input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_rdata,
    input  logic [NSLV-1:0][1:0]              s_axil_rresp,
    input  logic [NSLV-1:0]                   s_axil_rvalid,
    output logic [NSLV-1:0]                   s_axil_rready
);

    localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
    localparam int unsigned NTGT       = NSLV + 1;   // real slaves + error target

    // -----------------------------------------------------------------------
    // Master port -> slave port requests and payload
    // -----------------------------------------------------------------------
    logic [NMST-1:0][NTGT-1:0]              w_req;      // per-master one-hot target
    logic [NMST-1:0]                        w_awvalid, w_wvalid;
    logic [NMST-1:0][ADDR_WIDTH-1:0]        w_addr;
    logic [NMST-1:0][2:0]                   w_prot;
    logic [NMST-1:0][DATA_WIDTH-1:0]        w_data;
    logic [NMST-1:0][STRB_WIDTH-1:0]        w_strb;

    logic [NMST-1:0][NTGT-1:0]              r_req;
    logic [NMST-1:0][ADDR_WIDTH-1:0]        r_addr;
    logic [NMST-1:0][2:0]                   r_prot;

    // -----------------------------------------------------------------------
    // Per-target, per-master signals produced by each slave port
    // -----------------------------------------------------------------------
    logic [NTGT-1:0][NMST-1:0]                 t_w_gnt;
    logic [NTGT-1:0][NMST-1:0]                 t_w_awready;
    logic [NTGT-1:0][NMST-1:0]                 t_w_wready;
    logic [NTGT-1:0][NMST-1:0]                 t_w_bvalid;
    logic [NTGT-1:0][NMST-1:0][1:0]            t_w_bresp;

    logic [NTGT-1:0][NMST-1:0]                 t_r_gnt;
    logic [NTGT-1:0][NMST-1:0]                 t_r_arready;
    logic [NTGT-1:0][NMST-1:0]                 t_r_rvalid;
    logic [NTGT-1:0][NMST-1:0][DATA_WIDTH-1:0] t_r_rdata;
    logic [NTGT-1:0][NMST-1:0][1:0]            t_r_rresp;

    // Concentrated (per master) grant and response vectors
    logic [NMST-1:0]                        w_gnt, w_awready, w_wready, w_bvalid;
    logic [NMST-1:0][1:0]                   w_bresp;
    logic [NMST-1:0]                        r_gnt, r_arready, r_rvalid;
    logic [NMST-1:0][DATA_WIDTH-1:0]        r_rdata;
    logic [NMST-1:0][1:0]                   r_rresp;

    // -----------------------------------------------------------------------
    // Per-target slave-facing signals. Index NSLV is the internal error target.
    // -----------------------------------------------------------------------
    logic [NTGT-1:0][ADDR_WIDTH-1:0]        t_awaddr;
    logic [NTGT-1:0][2:0]                   t_awprot;
    logic [NTGT-1:0]                        t_awvalid;
    logic [NTGT-1:0]                        t_awready;
    logic [NTGT-1:0][DATA_WIDTH-1:0]        t_wdata;
    logic [NTGT-1:0][STRB_WIDTH-1:0]        t_wstrb;
    logic [NTGT-1:0]                        t_wvalid;
    logic [NTGT-1:0]                        t_wready;
    logic [NTGT-1:0][1:0]                   t_bresp;
    logic [NTGT-1:0]                        t_bvalid;
    logic [NTGT-1:0]                        t_bready;
    logic [NTGT-1:0][ADDR_WIDTH-1:0]        t_araddr;
    logic [NTGT-1:0][2:0]                   t_arprot;
    logic [NTGT-1:0]                        t_arvalid;
    logic [NTGT-1:0]                        t_arready;
    logic [NTGT-1:0][DATA_WIDTH-1:0]        t_rdata;
    logic [NTGT-1:0][1:0]                   t_rresp;
    logic [NTGT-1:0]                        t_rvalid;
    logic [NTGT-1:0]                        t_rready;

    // Error-target response signals. These are taken as dedicated scalars rather
    // than bits of the t_* arrays so that each t_* element has exactly one
    // driver: the t_* response arrays are fully driven by the boundary
    // assignment process below, including index NSLV.
    logic                      err_awready, err_wready, err_bvalid, err_arready, err_rvalid;
    logic [1:0]                err_bresp, err_rresp;
    logic [DATA_WIDTH-1:0]     err_rdata;

    // Transposed request vectors handed to each slave port.
    logic [NTGT-1:0][NMST-1:0]              t_w_req;
    logic [NTGT-1:0][NMST-1:0]              t_r_req;

    always_comb begin
        t_w_req = '0;
        t_r_req = '0;
        for (int unsigned s = 0; s < NTGT; s++) begin
            for (int unsigned m = 0; m < NMST; m++) begin
                t_w_req[s][m] = w_req[m][s];
                t_r_req[s][m] = r_req[m][s];
            end
        end
    end

    // -----------------------------------------------------------------------
    // Master ports
    // -----------------------------------------------------------------------
    genvar gm;
    generate
        for (gm = 0; gm < NMST; gm++) begin : g_mst
            axi_lite_master_port #(
                .ADDR_WIDTH (ADDR_WIDTH),
                .DATA_WIDTH (DATA_WIDTH),
                .NSLV_REAL  (NSLV),
                .REGION_LSB (REGION_LSB),
                .BASE_FLAT  (BASE_FLAT)
            ) u_mport (
                .clk         (clk),
                .rst         (rst),

                .awaddr_i    (m_axil_awaddr[gm]),
                .awprot_i    (m_axil_awprot[gm]),
                .awvalid_i   (m_axil_awvalid[gm]),
                .awready_o   (m_axil_awready[gm]),

                .wdata_i     (m_axil_wdata[gm]),
                .wstrb_i     (m_axil_wstrb[gm]),
                .wvalid_i    (m_axil_wvalid[gm]),
                .wready_o    (m_axil_wready[gm]),

                .bresp_o     (m_axil_bresp[gm]),
                .bvalid_o    (m_axil_bvalid[gm]),
                .bready_i    (m_axil_bready[gm]),

                .araddr_i    (m_axil_araddr[gm]),
                .arprot_i    (m_axil_arprot[gm]),
                .arvalid_i   (m_axil_arvalid[gm]),
                .arready_o   (m_axil_arready[gm]),

                .rdata_o     (m_axil_rdata[gm]),
                .rresp_o     (m_axil_rresp[gm]),
                .rvalid_o    (m_axil_rvalid[gm]),
                .rready_i    (m_axil_rready[gm]),

                .w_req_o     (w_req[gm]),
                .w_awvalid_o (w_awvalid[gm]),
                .w_wvalid_o  (w_wvalid[gm]),
                .w_addr_o    (w_addr[gm]),
                .w_prot_o    (w_prot[gm]),
                .w_data_o    (w_data[gm]),
                .w_strb_o    (w_strb[gm]),

                .r_req_o     (r_req[gm]),
                .r_addr_o    (r_addr[gm]),
                .r_prot_o    (r_prot[gm]),

                .w_gnt_i     (w_gnt[gm]),
                .w_awready_i (w_awready[gm]),
                .w_wready_i  (w_wready[gm]),
                .w_bvalid_i  (w_bvalid[gm]),
                .w_bresp_i   (w_bresp[gm]),

                .r_gnt_i     (r_gnt[gm]),
                .r_arready_i (r_arready[gm]),
                .r_rvalid_i  (r_rvalid[gm]),
                .r_rdata_i   (r_rdata[gm]),
                .r_rresp_i   (r_rresp[gm])
            );
        end
    endgenerate

    // -----------------------------------------------------------------------
    // Slave ports (one per real region plus one for the internal error target)
    // -----------------------------------------------------------------------
    genvar gs;
    generate
        for (gs = 0; gs < NTGT; gs++) begin : g_slv
            axi_lite_slave_port #(
                .ADDR_WIDTH (ADDR_WIDTH),
                .DATA_WIDTH (DATA_WIDTH),
                .NMST       (NMST)
            ) u_sport (
                .clk         (clk),
                .rst         (rst),

                .w_req_i     (t_w_req[gs]),
                .w_awvalid_i (w_awvalid),
                .w_wvalid_i  (w_wvalid),
                .w_addr_i    (w_addr),
                .w_prot_i    (w_prot),
                .w_data_i    (w_data),
                .w_strb_i    (w_strb),
                .w_bready_i  (m_axil_bready),

                .r_req_i     (t_r_req[gs]),
                .r_addr_i    (r_addr),
                .r_prot_i    (r_prot),
                .r_rready_i  (m_axil_rready),

                .awaddr_o    (t_awaddr[gs]),
                .awprot_o    (t_awprot[gs]),
                .awvalid_o   (t_awvalid[gs]),
                .awready_i   (t_awready[gs]),

                .wdata_o     (t_wdata[gs]),
                .wstrb_o     (t_wstrb[gs]),
                .wvalid_o    (t_wvalid[gs]),
                .wready_i    (t_wready[gs]),

                .bresp_i     (t_bresp[gs]),
                .bvalid_i    (t_bvalid[gs]),
                .bready_o    (t_bready[gs]),

                .araddr_o    (t_araddr[gs]),
                .arprot_o    (t_arprot[gs]),
                .arvalid_o   (t_arvalid[gs]),
                .arready_i   (t_arready[gs]),

                .rdata_i     (t_rdata[gs]),
                .rresp_i     (t_rresp[gs]),
                .rvalid_i    (t_rvalid[gs]),
                .rready_o    (t_rready[gs]),

                .w_gnt_o     (t_w_gnt[gs]),
                .w_awready_o (t_w_awready[gs]),
                .w_wready_o  (t_w_wready[gs]),
                .w_bvalid_o  (t_w_bvalid[gs]),
                .w_bresp_o   (t_w_bresp[gs]),

                .r_gnt_o     (t_r_gnt[gs]),
                .r_arready_o (t_r_arready[gs]),
                .r_rvalid_o  (t_r_rvalid[gs]),
                .r_rdata_o   (t_r_rdata[gs]),
                .r_rresp_o   (t_r_rresp[gs])
            );
        end
    endgenerate

    // -----------------------------------------------------------------------
    // Internal error target at index NSLV
    // -----------------------------------------------------------------------
    axil_error_slave #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH)
    ) u_error_slave (
        .clk     (clk),
        .rst     (rst),
        .awaddr  (t_awaddr[NSLV]),
        .awprot  (t_awprot[NSLV]),
        .awvalid (t_awvalid[NSLV]),
        .awready (err_awready),
        .wdata   (t_wdata[NSLV]),
        .wstrb   (t_wstrb[NSLV]),
        .wvalid  (t_wvalid[NSLV]),
        .wready  (err_wready),
        .bresp   (err_bresp),
        .bvalid  (err_bvalid),
        .bready  (t_bready[NSLV]),
        .araddr  (t_araddr[NSLV]),
        .arprot  (t_arprot[NSLV]),
        .arvalid (t_arvalid[NSLV]),
        .arready (err_arready),
        .rdata   (err_rdata),
        .rresp   (err_rresp),
        .rvalid  (err_rvalid),
        .rready  (t_rready[NSLV])
    );

    // -----------------------------------------------------------------------
    // Grant / response concentration.
    //
    // OR-reduction is exact here because a master's request vector is one-hot,
    // so at most one target can grant a given master (proved in formal flow).
    // -----------------------------------------------------------------------
    always_comb begin
        w_gnt     = '0;
        w_awready = '0;
        w_wready  = '0;
        w_bvalid  = '0;
        w_bresp   = '0;
        r_gnt     = '0;
        r_arready = '0;
        r_rvalid  = '0;
        r_rdata   = '0;
        r_rresp   = '0;

        for (int unsigned s = 0; s < NTGT; s++) begin
            for (int unsigned m = 0; m < NMST; m++) begin
                w_gnt[m]     |= t_w_gnt[s][m];
                w_awready[m] |= t_w_awready[s][m];
                w_wready[m]  |= t_w_wready[s][m];
                w_bvalid[m]  |= t_w_bvalid[s][m];
                w_bresp[m]   |= t_w_bresp[s][m];

                r_gnt[m]     |= t_r_gnt[s][m];
                r_arready[m] |= t_r_arready[s][m];
                r_rvalid[m]  |= t_r_rvalid[s][m];
                r_rdata[m]   |= t_r_rdata[s][m];
                r_rresp[m]   |= t_r_rresp[s][m];
            end
        end
    end

    // -----------------------------------------------------------------------
    // Expose the real slave ports at the boundary
    // -----------------------------------------------------------------------
    always_comb begin
        for (int unsigned s = 0; s < NSLV; s++) begin
            s_axil_awaddr[s]  = t_awaddr[s];
            s_axil_awprot[s]  = t_awprot[s];
            s_axil_awvalid[s] = t_awvalid[s];
            s_axil_wdata[s]   = t_wdata[s];
            s_axil_wstrb[s]   = t_wstrb[s];
            s_axil_wvalid[s]  = t_wvalid[s];
            s_axil_bready[s]  = t_bready[s];
            s_axil_araddr[s]  = t_araddr[s];
            s_axil_arprot[s]  = t_arprot[s];
            s_axil_arvalid[s] = t_arvalid[s];
            s_axil_rready[s]  = t_rready[s];

            // External slave responses into the internal per-target array.
            t_awready[s] = s_axil_awready[s];
            t_wready[s]  = s_axil_wready[s];
            t_bresp[s]   = s_axil_bresp[s];
            t_bvalid[s]  = s_axil_bvalid[s];
            t_arready[s] = s_axil_arready[s];
            t_rdata[s]   = s_axil_rdata[s];
            t_rresp[s]   = s_axil_rresp[s];
            t_rvalid[s]  = s_axil_rvalid[s];
        end

        // Index NSLV (the internal error target) is driven by the error slave's
        // dedicated response wires, so the whole t_* response array is produced
        // by this single process and has exactly one driver.
        t_awready[NSLV] = err_awready;
        t_wready[NSLV]  = err_wready;
        t_bresp[NSLV]   = err_bresp;
        t_bvalid[NSLV]  = err_bvalid;
        t_arready[NSLV] = err_arready;
        t_rdata[NSLV]   = err_rdata;
        t_rresp[NSLV]   = err_rresp;
        t_rvalid[NSLV]  = err_rvalid;
    end

    // -----------------------------------------------------------------------
    // Cross-cutting invariant assertions
    //
    // STYLE, and why the properties are aggregated:
    //   * Same-cycle implications are written `!guard || condition` because
    //     Yosys (the formal front end) reads only boolean property expressions,
    //     so this form is what lets one property text be both simulated (with
    //     the simulator's --assert option) and formally proven.
    //   * Yosys names a procedural assertion after its label and does NOT
    //     qualify it with the generate scope or loop index, so a label may
    //     occur exactly once per module.  A property that must hold for every
    //     (master, target) pair is therefore folded into a combinational
    //     helper signal (assertion-only logic, removed from synthesis together
    //     with this whole `ifdef) and asserted once.
    // All properties in this section are proven in formal/routing.sby.
    // -----------------------------------------------------------------------
`ifdef AXIL_ASSERTIONS
    localparam int unsigned CMP_W = ADDR_WIDTH - REGION_LSB;

    // ---- helper: every master's write/read request select is one-hot0 ------
    logic w_req_onehot_ok, r_req_onehot_ok;

    always_comb begin
        w_req_onehot_ok = 1'b1;
        r_req_onehot_ok = 1'b1;
        for (int unsigned m = 0; m < NMST; m++) begin
            if (!$onehot0(w_req[m])) w_req_onehot_ok = 1'b0;
            if (!$onehot0(r_req[m])) r_req_onehot_ok = 1'b0;
        end
    end

    // ---- helper: no two targets hold a grant for the same master ----------
    // This is what justifies the OR-reduction of the per-target grants.
    logic w_gnt_exclusive_ok, r_gnt_exclusive_ok;

    always_comb begin
        w_gnt_exclusive_ok = 1'b1;
        r_gnt_exclusive_ok = 1'b1;
        for (int unsigned s = 0; s < NTGT; s++) begin
            for (int unsigned t = 0; t < NTGT; t++) begin
                for (int unsigned m = 0; m < NMST; m++) begin
                    if ((s != t) && t_w_gnt[s][m] && t_w_gnt[t][m]) begin
                        w_gnt_exclusive_ok = 1'b0;
                    end
                    if ((s != t) && t_r_gnt[s][m] && t_r_gnt[t][m]) begin
                        r_gnt_exclusive_ok = 1'b0;
                    end
                end
            end
        end
    end

    // ---- helper: datapath integrity ---------------------------------------
    //  * payload provenance: a target is presented with the payload of the
    //    master that holds its grant ("no cross-talk between masters"),
    //  * region consistency: a real slave only sees addresses of its own
    //    region, the error target only sees unmapped addresses.
    logic provenance_ok, w_region_ok, r_region_ok, w_err_unmapped_ok, r_err_unmapped_ok;
    logic w_gnt_addr_ok, r_gnt_addr_ok;

    always_comb begin
        provenance_ok      = 1'b1;
        w_region_ok        = 1'b1;
        r_region_ok        = 1'b1;
        w_err_unmapped_ok  = 1'b1;
        r_err_unmapped_ok  = 1'b1;
        w_gnt_addr_ok      = 1'b1;
        r_gnt_addr_ok      = 1'b1;

        for (int unsigned s = 0; s < NTGT; s++) begin
            for (int unsigned m = 0; m < NMST; m++) begin
                if (t_w_gnt[s][m] &&
                    ((t_awaddr[s] != w_addr[m]) || (t_awprot[s] != w_prot[m]) ||
                     (t_wdata[s]  != w_data[m]) || (t_wstrb[s]  != w_strb[m]))) begin
                    provenance_ok = 1'b0;
                end
                if (t_r_gnt[s][m] &&
                    ((t_araddr[s] != r_addr[m]) || (t_arprot[s] != r_prot[m]))) begin
                    provenance_ok = 1'b0;
                end

                // A target only ever holds a grant for the master whose captured
                // address decodes to that target (the error target: an unmapped
                // address).  The arbiters take a grant only from the requester's
                // one-hot select, which the master port keeps consistent with
                // the captured address, and a granted master accepts nothing
                // new (its READYs are gated by the grant), so the pair is frozen
                // for as long as the grant lasts.  This is the link that carries
                // "no cross-talk" from the request phase (where the select is
                // checked) to the presentation phase (where the address actually
                // reaches the target), and it is what makes the region
                // properties below inductive.
                if (t_w_gnt[s][m]) begin
                    if (s < NSLV) begin
                        if (w_addr[m][ADDR_WIDTH-1:REGION_LSB] !=
                            BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                            w_gnt_addr_ok = 1'b0;
                        end
                    end else begin
                        for (int unsigned r = 0; r < NSLV; r++) begin
                            if (w_addr[m][ADDR_WIDTH-1:REGION_LSB] ==
                                BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                                w_gnt_addr_ok = 1'b0;
                            end
                        end
                    end
                end
                if (t_r_gnt[s][m]) begin
                    if (s < NSLV) begin
                        if (r_addr[m][ADDR_WIDTH-1:REGION_LSB] !=
                            BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                            r_gnt_addr_ok = 1'b0;
                        end
                    end else begin
                        for (int unsigned r = 0; r < NSLV; r++) begin
                            if (r_addr[m][ADDR_WIDTH-1:REGION_LSB] ==
                                BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                                r_gnt_addr_ok = 1'b0;
                            end
                        end
                    end
                end
            end

            if (s < NSLV) begin
                if (t_awvalid[s] &&
                    (t_awaddr[s][ADDR_WIDTH-1:REGION_LSB] !=
                     BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W])) begin
                    w_region_ok = 1'b0;
                end
                if (t_arvalid[s] &&
                    (t_araddr[s][ADDR_WIDTH-1:REGION_LSB] !=
                     BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W])) begin
                    r_region_ok = 1'b0;
                end
            end else begin
                if (t_awvalid[s]) begin
                    for (int unsigned r = 0; r < NSLV; r++) begin
                        if (t_awaddr[s][ADDR_WIDTH-1:REGION_LSB] ==
                            BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                            w_err_unmapped_ok = 1'b0;
                        end
                    end
                end
                if (t_arvalid[s]) begin
                    for (int unsigned r = 0; r < NSLV; r++) begin
                        if (t_araddr[s][ADDR_WIDTH-1:REGION_LSB] ==
                            BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                            r_err_unmapped_ok = 1'b0;
                        end
                    end
                end
            end
        end
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_mst_w_req_onehot:  assert property (w_req_onehot_ok);
            ap_mst_r_req_onehot:  assert property (r_req_onehot_ok);
            ap_gnt_exclusive_w:   assert property (w_gnt_exclusive_ok);
            ap_gnt_exclusive_r:   assert property (r_gnt_exclusive_ok);
            ap_payload_from_owner: assert property (provenance_ok);
            ap_w_addr_in_region:  assert property (w_region_ok);
            ap_r_addr_in_region:  assert property (r_region_ok);
            ap_w_err_addr_unmapped: assert property (w_err_unmapped_ok);
            ap_r_err_addr_unmapped: assert property (r_err_unmapped_ok);
            ap_w_gnt_addr_match:  assert property (w_gnt_addr_ok);
            ap_r_gnt_addr_match:  assert property (r_gnt_addr_ok);
        end
    end
`endif

endmodule
