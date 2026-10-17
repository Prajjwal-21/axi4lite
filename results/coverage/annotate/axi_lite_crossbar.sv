//      // verilator_coverage annotation
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
 001142     input  logic clk,
~000015     input  logic rst,
        
            // ---------------------------------------------------------------------
            // Master-side AXI4-Lite ports (each entry is one master)
            // ---------------------------------------------------------------------
~000029     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_awaddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_awprot,
 000086     input  logic [NMST-1:0]                   m_axil_awvalid,
 000094     output logic [NMST-1:0]                   m_axil_awready,
        
~000028     input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_wdata,
~000019     input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_axil_wstrb,
 000086     input  logic [NMST-1:0]                   m_axil_wvalid,
 000094     output logic [NMST-1:0]                   m_axil_wready,
        
~000049     output logic [NMST-1:0][1:0]              m_axil_bresp,
 000086     output logic [NMST-1:0]                   m_axil_bvalid,
 000079     input  logic [NMST-1:0]                   m_axil_bready,
        
~000026     input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_axil_araddr,
%000000     input  logic [NMST-1:0][2:0]              m_axil_arprot,
 000077     input  logic [NMST-1:0]                   m_axil_arvalid,
 000085     output logic [NMST-1:0]                   m_axil_arready,
        
~000020     output logic [NMST-1:0][DATA_WIDTH-1:0]   m_axil_rdata,
~000021     output logic [NMST-1:0][1:0]              m_axil_rresp,
 000077     output logic [NMST-1:0]                   m_axil_rvalid,
 000050     input  logic [NMST-1:0]                   m_axil_rready,
        
            // ---------------------------------------------------------------------
            // Slave-side AXI4-Lite ports (each entry is one real slave region)
            // ---------------------------------------------------------------------
~000035     output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_awaddr,
%000000     output logic [NSLV-1:0][2:0]              s_axil_awprot,
 000037     output logic [NSLV-1:0]                   s_axil_awvalid,
 000129     input  logic [NSLV-1:0]                   s_axil_awready,
        
~000027     output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_wdata,
 000031     output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_axil_wstrb,
 000037     output logic [NSLV-1:0]                   s_axil_wvalid,
 000111     input  logic [NSLV-1:0]                   s_axil_wready,
        
%000003     input  logic [NSLV-1:0][1:0]              s_axil_bresp,
 000037     input  logic [NSLV-1:0]                   s_axil_bvalid,
 000035     output logic [NSLV-1:0]                   s_axil_bready,
        
~000041     output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_axil_araddr,
%000000     output logic [NSLV-1:0][2:0]              s_axil_arprot,
~000046     output logic [NSLV-1:0]                   s_axil_arvalid,
 000096     input  logic [NSLV-1:0]                   s_axil_arready,
        
~000010     input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_axil_rdata,
%000001     input  logic [NSLV-1:0][1:0]              s_axil_rresp,
~000046     input  logic [NSLV-1:0]                   s_axil_rvalid,
~000046     output logic [NSLV-1:0]                   s_axil_rready
        );
        
            localparam int unsigned STRB_WIDTH = DATA_WIDTH / 8;
            localparam int unsigned NTGT       = NSLV + 1;   // real slaves + error target
        
            // -----------------------------------------------------------------------
            // Master port -> slave port requests and payload
            // -----------------------------------------------------------------------
~000024     logic [NMST-1:0][NTGT-1:0]              w_req;      // per-master one-hot target
 000086     logic [NMST-1:0]                        w_awvalid, w_wvalid;
~000029     logic [NMST-1:0][ADDR_WIDTH-1:0]        w_addr;
%000000     logic [NMST-1:0][2:0]                   w_prot;
~000028     logic [NMST-1:0][DATA_WIDTH-1:0]        w_data;
~000019     logic [NMST-1:0][STRB_WIDTH-1:0]        w_strb;
        
~000027     logic [NMST-1:0][NTGT-1:0]              r_req;
~000026     logic [NMST-1:0][ADDR_WIDTH-1:0]        r_addr;
%000000     logic [NMST-1:0][2:0]                   r_prot;
        
            // -----------------------------------------------------------------------
            // Per-target, per-master signals produced by each slave port
            // -----------------------------------------------------------------------
~000024     logic [NTGT-1:0][NMST-1:0]                 t_w_gnt;
~000027     logic [NTGT-1:0][NMST-1:0]                 t_w_awready;
~000026     logic [NTGT-1:0][NMST-1:0]                 t_w_wready;
~000024     logic [NTGT-1:0][NMST-1:0]                 t_w_bvalid;
~000022     logic [NTGT-1:0][NMST-1:0][1:0]            t_w_bresp;
        
~000027     logic [NTGT-1:0][NMST-1:0]                 t_r_gnt;
~000027     logic [NTGT-1:0][NMST-1:0]                 t_r_arready;
~000027     logic [NTGT-1:0][NMST-1:0]                 t_r_rvalid;
~000016     logic [NTGT-1:0][NMST-1:0][DATA_WIDTH-1:0] t_r_rdata;
~000020     logic [NTGT-1:0][NMST-1:0][1:0]            t_r_rresp;
        
            // Concentrated (per master) grant and response vectors
 000086     logic [NMST-1:0]                        w_gnt, w_awready, w_wready, w_bvalid;
~000049     logic [NMST-1:0][1:0]                   w_bresp;
 000077     logic [NMST-1:0]                        r_gnt, r_arready, r_rvalid;
~000032     logic [NMST-1:0][DATA_WIDTH-1:0]        r_rdata;
~000024     logic [NMST-1:0][1:0]                   r_rresp;
        
            // -----------------------------------------------------------------------
            // Per-target slave-facing signals. Index NSLV is the internal error target.
            // -----------------------------------------------------------------------
~000035     logic [NTGT-1:0][ADDR_WIDTH-1:0]        t_awaddr;
%000000     logic [NTGT-1:0][2:0]                   t_awprot;
 000037     logic [NTGT-1:0]                        t_awvalid;
 000129     logic [NTGT-1:0]                        t_awready;
~000027     logic [NTGT-1:0][DATA_WIDTH-1:0]        t_wdata;
 000031     logic [NTGT-1:0][STRB_WIDTH-1:0]        t_wstrb;
 000037     logic [NTGT-1:0]                        t_wvalid;
 000111     logic [NTGT-1:0]                        t_wready;
%000003     logic [NTGT-1:0][1:0]                   t_bresp;
 000037     logic [NTGT-1:0]                        t_bvalid;
 000035     logic [NTGT-1:0]                        t_bready;
~000041     logic [NTGT-1:0][ADDR_WIDTH-1:0]        t_araddr;
%000000     logic [NTGT-1:0][2:0]                   t_arprot;
~000046     logic [NTGT-1:0]                        t_arvalid;
 000096     logic [NTGT-1:0]                        t_arready;
~000010     logic [NTGT-1:0][DATA_WIDTH-1:0]        t_rdata;
%000001     logic [NTGT-1:0][1:0]                   t_rresp;
~000046     logic [NTGT-1:0]                        t_rvalid;
~000046     logic [NTGT-1:0]                        t_rready;
        
            // Error-target response signals. These are taken as dedicated scalars rather
            // than bits of the t_* arrays so that each t_* element has exactly one
            // driver: the t_* response arrays are fully driven by the boundary
            // assignment process below, including index NSLV.
~000032     logic                      err_awready, err_wready, err_bvalid, err_arready, err_rvalid;
%000001     logic [1:0]                err_bresp, err_rresp;
%000000     logic [DATA_WIDTH-1:0]     err_rdata;
        
            // Transposed request vectors handed to each slave port.
~000024     logic [NTGT-1:0][NMST-1:0]              t_w_req;
~000027     logic [NTGT-1:0][NMST-1:0]              t_r_req;
        
 008587     always_comb begin
 008587         t_w_req = '0;
 008587         t_r_req = '0;
 034348         for (int unsigned s = 0; s < NTGT; s++) begin
 068696             for (int unsigned m = 0; m < NMST; m++) begin
 068696                 t_w_req[s][m] = w_req[m][s];
 068696                 t_r_req[s][m] = r_req[m][s];
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
 008587     always_comb begin
 008587         w_gnt     = '0;
 008587         w_awready = '0;
 008587         w_wready  = '0;
 008587         w_bvalid  = '0;
 008587         w_bresp   = '0;
 008587         r_gnt     = '0;
 008587         r_arready = '0;
 008587         r_rvalid  = '0;
 008587         r_rdata   = '0;
 008587         r_rresp   = '0;
        
 034348         for (int unsigned s = 0; s < NTGT; s++) begin
 068696             for (int unsigned m = 0; m < NMST; m++) begin
 068696                 w_gnt[m]     |= t_w_gnt[s][m];
 068696                 w_awready[m] |= t_w_awready[s][m];
 068696                 w_wready[m]  |= t_w_wready[s][m];
 068696                 w_bvalid[m]  |= t_w_bvalid[s][m];
 068696                 w_bresp[m]   |= t_w_bresp[s][m];
        
 068696                 r_gnt[m]     |= t_r_gnt[s][m];
 068696                 r_arready[m] |= t_r_arready[s][m];
 068696                 r_rvalid[m]  |= t_r_rvalid[s][m];
 068696                 r_rdata[m]   |= t_r_rdata[s][m];
 068696                 r_rresp[m]   |= t_r_rresp[s][m];
                    end
                end
            end
        
            // -----------------------------------------------------------------------
            // Expose the real slave ports at the boundary
            // -----------------------------------------------------------------------
 008587     always_comb begin
 025761         for (int unsigned s = 0; s < NSLV; s++) begin
 025761             s_axil_awaddr[s]  = t_awaddr[s];
 025761             s_axil_awprot[s]  = t_awprot[s];
 025761             s_axil_awvalid[s] = t_awvalid[s];
 025761             s_axil_wdata[s]   = t_wdata[s];
 025761             s_axil_wstrb[s]   = t_wstrb[s];
 025761             s_axil_wvalid[s]  = t_wvalid[s];
 025761             s_axil_bready[s]  = t_bready[s];
 025761             s_axil_araddr[s]  = t_araddr[s];
 025761             s_axil_arprot[s]  = t_arprot[s];
 025761             s_axil_arvalid[s] = t_arvalid[s];
 025761             s_axil_rready[s]  = t_rready[s];
        
                    // External slave responses into the internal per-target array.
 025761             t_awready[s] = s_axil_awready[s];
 025761             t_wready[s]  = s_axil_wready[s];
 025761             t_bresp[s]   = s_axil_bresp[s];
 025761             t_bvalid[s]  = s_axil_bvalid[s];
 025761             t_arready[s] = s_axil_arready[s];
 025761             t_rdata[s]   = s_axil_rdata[s];
 025761             t_rresp[s]   = s_axil_rresp[s];
 025761             t_rvalid[s]  = s_axil_rvalid[s];
                end
        
                // Index NSLV (the internal error target) is driven by the error slave's
                // dedicated response wires, so the whole t_* response array is produced
                // by this single process and has exactly one driver.
 008587         t_awready[NSLV] = err_awready;
 008587         t_wready[NSLV]  = err_wready;
 008587         t_bresp[NSLV]   = err_bresp;
 008587         t_bvalid[NSLV]  = err_bvalid;
 008587         t_arready[NSLV] = err_arready;
 008587         t_rdata[NSLV]   = err_rdata;
 008587         t_rresp[NSLV]   = err_rresp;
 008587         t_rvalid[NSLV]  = err_rvalid;
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
%000001     logic w_req_onehot_ok, r_req_onehot_ok;
        
 008587     always_comb begin
 008587         w_req_onehot_ok = 1'b1;
 008587         r_req_onehot_ok = 1'b1;
 017174         for (int unsigned m = 0; m < NMST; m++) begin
~017174             if (!$onehot0(w_req[m])) w_req_onehot_ok = 1'b0;
~017174             if (!$onehot0(r_req[m])) r_req_onehot_ok = 1'b0;
                end
            end
        
            // ---- helper: no two targets hold a grant for the same master ----------
            // This is what justifies the OR-reduction of the per-target grants.
%000001     logic w_gnt_exclusive_ok, r_gnt_exclusive_ok;
        
 008587     always_comb begin
 008587         w_gnt_exclusive_ok = 1'b1;
 008587         r_gnt_exclusive_ok = 1'b1;
 034348         for (int unsigned s = 0; s < NTGT; s++) begin
 137392             for (int unsigned t = 0; t < NTGT; t++) begin
 274784                 for (int unsigned m = 0; m < NMST; m++) begin
~274784                     if ((s != t) && t_w_gnt[s][m] && t_w_gnt[t][m]) begin
%000000                         w_gnt_exclusive_ok = 1'b0;
                            end
~274784                     if ((s != t) && t_r_gnt[s][m] && t_r_gnt[t][m]) begin
%000000                         r_gnt_exclusive_ok = 1'b0;
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
%000001     logic provenance_ok, w_region_ok, r_region_ok, w_err_unmapped_ok, r_err_unmapped_ok;
%000001     logic w_gnt_addr_ok, r_gnt_addr_ok;
        
 008587     always_comb begin
 008587         provenance_ok      = 1'b1;
 008587         w_region_ok        = 1'b1;
 008587         r_region_ok        = 1'b1;
 008587         w_err_unmapped_ok  = 1'b1;
 008587         r_err_unmapped_ok  = 1'b1;
 008587         w_gnt_addr_ok      = 1'b1;
 008587         r_gnt_addr_ok      = 1'b1;
        
 034348         for (int unsigned s = 0; s < NTGT; s++) begin
 068696             for (int unsigned m = 0; m < NMST; m++) begin
~068696                 if (t_w_gnt[s][m] &&
                            ((t_awaddr[s] != w_addr[m]) || (t_awprot[s] != w_prot[m]) ||
%000000                      (t_wdata[s]  != w_data[m]) || (t_wstrb[s]  != w_strb[m]))) begin
%000000                     provenance_ok = 1'b0;
                        end
~068696                 if (t_r_gnt[s][m] &&
%000000                     ((t_araddr[s] != r_addr[m]) || (t_arprot[s] != r_prot[m]))) begin
%000000                     provenance_ok = 1'b0;
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
 065938                 if (t_w_gnt[s][m]) begin
 003349                     if (s < NSLV) begin
~003349                         if (w_addr[m][ADDR_WIDTH-1:REGION_LSB] !=
%000000                             BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                             w_gnt_addr_ok = 1'b0;
                                end
 000510                     end else begin
 001530                         for (int unsigned r = 0; r < NSLV; r++) begin
~001530                             if (w_addr[m][ADDR_WIDTH-1:REGION_LSB] ==
%000000                                 BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                                 w_gnt_addr_ok = 1'b0;
                                    end
                                end
                            end
                        end
 066600                 if (t_r_gnt[s][m]) begin
 001816                     if (s < NSLV) begin
~001816                         if (r_addr[m][ADDR_WIDTH-1:REGION_LSB] !=
%000000                             BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                             r_gnt_addr_ok = 1'b0;
                                end
 000280                     end else begin
 000840                         for (int unsigned r = 0; r < NSLV; r++) begin
~000840                             if (r_addr[m][ADDR_WIDTH-1:REGION_LSB] ==
%000000                                 BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                                 r_gnt_addr_ok = 1'b0;
                                    end
                                end
                            end
                        end
                    end
        
 025761             if (s < NSLV) begin
~025761                 if (t_awvalid[s] &&
                            (t_awaddr[s][ADDR_WIDTH-1:REGION_LSB] !=
%000000                      BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W])) begin
%000000                     w_region_ok = 1'b0;
                        end
~025761                 if (t_arvalid[s] &&
                            (t_araddr[s][ADDR_WIDTH-1:REGION_LSB] !=
%000000                      BASE_FLAT[s*ADDR_WIDTH + REGION_LSB +: CMP_W])) begin
%000000                     r_region_ok = 1'b0;
                        end
 008587             end else begin
 008416                 if (t_awvalid[s]) begin
 000513                     for (int unsigned r = 0; r < NSLV; r++) begin
~000513                         if (t_awaddr[s][ADDR_WIDTH-1:REGION_LSB] ==
%000000                             BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                             w_err_unmapped_ok = 1'b0;
                                end
                            end
                        end
 008447                 if (t_arvalid[s]) begin
 000420                     for (int unsigned r = 0; r < NSLV; r++) begin
~000420                         if (t_araddr[s][ADDR_WIDTH-1:REGION_LSB] ==
%000000                             BASE_FLAT[r*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
%000000                             r_err_unmapped_ok = 1'b0;
                                end
                            end
                        end
                    end
                end
            end
        
 001142     always_ff @(posedge clk) begin
 001114         if (!rst) begin
 001114             ap_mst_w_req_onehot:  assert property (w_req_onehot_ok);
 001114             ap_mst_r_req_onehot:  assert property (r_req_onehot_ok);
 001114             ap_gnt_exclusive_w:   assert property (w_gnt_exclusive_ok);
 001114             ap_gnt_exclusive_r:   assert property (r_gnt_exclusive_ok);
 001114             ap_payload_from_owner: assert property (provenance_ok);
 001114             ap_w_addr_in_region:  assert property (w_region_ok);
 001114             ap_r_addr_in_region:  assert property (r_region_ok);
 001114             ap_w_err_addr_unmapped: assert property (w_err_unmapped_ok);
 001114             ap_r_err_addr_unmapped: assert property (r_err_unmapped_ok);
 001114             ap_w_gnt_addr_match:  assert property (w_gnt_addr_ok);
 001114             ap_r_gnt_addr_match:  assert property (r_gnt_addr_ok);
                end
            end
        `endif
        
        endmodule
        
