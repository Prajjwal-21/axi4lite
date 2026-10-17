// -----------------------------------------------------------------------------
// formal/axil_crossbar_harness.sv
//
// FORMAL HARNESS (testbench-side; not synthesizable, not part of the design).
//
// Wraps the real `axi_lite_crossbar` and adds an independent set of boundary
// monitors, so the proof covers two layers at once:
//
//   1. the crossbar's own in-RTL assertions (rtl/axi_lite_crossbar.sv,
//      rtl/axi_lite_master_port.sv, rtl/axi_lite_slave_port.sv, ... , compiled
//      with -DAXIL_ASSERTIONS): payload provenance, grant exclusivity,
//      one-hot request selects, region consistency, reset inertness;
//
//   2. the boundary properties below, written from the AXI4-Lite handshake
//      rules and the documented address map only.  They observe nothing but
//      the crossbar's ports, so they cannot be satisfied by a wrong assumption
//      inside the RTL:
//        * no response without a request: a B/R is delivered to a master only
//          while that master has a write/read outstanding that the monitor
//          itself has watched being accepted,
//        * the response a master sees is the response of *its own* target, and
//          the error target answers DECERR with zero read data,
//        * no cross-talk: what a slave port is presented with is the payload of
//          a master whose address decodes to that very slave (address, PROT,
//          data and strobes),
//        * a write/read cannot complete more times than it was accepted
//          (counters; see "NO DUPLICATE COMPLETION" below),
//        * at most one outstanding write and one outstanding read per master.
//
// ENVIRONMENT
//   Every master-side and slave-side input is a free input: the proof holds for
//   arbitrary masters and arbitrary slaves, including masters that violate the
//   AXI hold rules and slaves that answer late, early or never.  No assumption
//   is placed on the environment for any property in this file.  (Liveness
//   under a fair environment is a separate job, formal/progress.sby.)
//
// SCOPE
//   Instantiated for the configuration this project ships: 2 masters, 3 real
//   slaves + the internal error target, 32-bit address/data, 4 KiB regions.
//
// TWO BUILD MODES (two jobs, two honest claim levels)
//
//   * Default (no macro): everything above is compiled.  Used by
//     formal/completion.sby, a BOUNDED model checking job (mode bmc): it proves
//     the whole list for every possible behavior up to the job's depth.
//
//     The transaction-level properties cannot be proven by induction, and this
//     is inherent, not a shortcut: they are statements about the *history* of
//     the boundary (what was accepted, what is outstanding, how often something
//     completed).  Their evidence lives in the harness registers, and an
//     induction step is allowed to start from a state in which those registers
//     and the DUT's internal state disagree (such a state is unreachable from
//     reset but is a legal induction step), so no invariant over them alone can
//     be inductive.  The same properties are additionally checked on every
//     cycle of every simulated test by tb/cocotb/axil_monitor.py and
//     tb/cocotb/axil_scoreboard.py, which is what covers long sequences.
//
//   * -DAXIL_FML_RTL_ONLY: the whole harness property set is removed and only
//     the DUT's own in-RTL assertions remain, together with the initial-reset
//     assumption.  Used by formal/routing.sby, which proves those UNBOUNDED by
//     1-induction.  That is where the no-cross-talk statement lives in its
//     unbounded form: "every payload a slave port is presented with comes from
//     a master whose address decodes to that slave" is a state relation inside
//     the crossbar (rtl/axi_lite_crossbar.sv, ap_payload_from_owner and the
//     region assertions), so it is inductive and does not need the harness.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axil_crossbar_harness #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned NMST       = 2,
    parameter int unsigned NSLV       = 3,
    parameter int unsigned REGION_LSB = 12,
    parameter int unsigned CNT_W      = 5
) (
    input logic clk,
    // Free: reset may be asserted in any cycle, including mid-transaction.
    input logic rst,

    // ---------------------------------------------------------------------
    // Master-side ports (free inputs: an arbitrary master on each port)
    // ---------------------------------------------------------------------
    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_awaddr,
    input  logic [NMST-1:0][2:0]              m_awprot,
    input  logic [NMST-1:0]                   m_awvalid,
    output logic [NMST-1:0]                   m_awready,

    input  logic [NMST-1:0][DATA_WIDTH-1:0]   m_wdata,
    input  logic [NMST-1:0][DATA_WIDTH/8-1:0] m_wstrb,
    input  logic [NMST-1:0]                   m_wvalid,
    output logic [NMST-1:0]                   m_wready,

    output logic [NMST-1:0][1:0]              m_bresp,
    output logic [NMST-1:0]                   m_bvalid,
    input  logic [NMST-1:0]                   m_bready,

    input  logic [NMST-1:0][ADDR_WIDTH-1:0]   m_araddr,
    input  logic [NMST-1:0][2:0]              m_arprot,
    input  logic [NMST-1:0]                   m_arvalid,
    output logic [NMST-1:0]                   m_arready,

    output logic [NMST-1:0][DATA_WIDTH-1:0]   m_rdata,
    output logic [NMST-1:0][1:0]              m_rresp,
    output logic [NMST-1:0]                   m_rvalid,
    input  logic [NMST-1:0]                   m_rready,

    // ---------------------------------------------------------------------
    // Slave-side ports (free inputs: an arbitrary slave on each port)
    // ---------------------------------------------------------------------
    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_awaddr,
    output logic [NSLV-1:0][2:0]              s_awprot,
    output logic [NSLV-1:0]                   s_awvalid,
    input  logic [NSLV-1:0]                   s_awready,

    output logic [NSLV-1:0][DATA_WIDTH-1:0]   s_wdata,
    output logic [NSLV-1:0][DATA_WIDTH/8-1:0] s_wstrb,
    output logic [NSLV-1:0]                   s_wvalid,
    input  logic [NSLV-1:0]                   s_wready,

    input  logic [NSLV-1:0][1:0]              s_bresp,
    input  logic [NSLV-1:0]                   s_bvalid,
    output logic [NSLV-1:0]                   s_bready,

    output logic [NSLV-1:0][ADDR_WIDTH-1:0]   s_araddr,
    output logic [NSLV-1:0][2:0]              s_arprot,
    output logic [NSLV-1:0]                   s_arvalid,
    input  logic [NSLV-1:0]                   s_arready,

    input  logic [NSLV-1:0][DATA_WIDTH-1:0]   s_rdata,
    input  logic [NSLV-1:0][1:0]              s_rresp,
    input  logic [NSLV-1:0]                   s_rvalid,
    output logic [NSLV-1:0]                   s_rready
);

    localparam int unsigned NTGT    = NSLV + 1;   // real slaves + error target
    localparam logic [CNT_W-1:0] CNT_SAT = {CNT_W{1'b1}};  // saturating value

    // Documented address map (docs/register_map.md), as the compared field
    // addr[ADDR_WIDTH-1:REGION_LSB] - literals, not the RTL's parameter.
    localparam logic [ADDR_WIDTH-1:0] BASE_UART  = 32'h0000_0000;
    localparam logic [ADDR_WIDTH-1:0] BASE_GPIO  = 32'h0000_4000;
    localparam logic [ADDR_WIDTH-1:0] BASE_TIMER = 32'h0000_8000;
    localparam logic [ADDR_WIDTH-1-REGION_LSB:0] UART_HI  = BASE_UART[ADDR_WIDTH-1:REGION_LSB];
    localparam logic [ADDR_WIDTH-1-REGION_LSB:0] GPIO_HI  = BASE_GPIO[ADDR_WIDTH-1:REGION_LSB];
    localparam logic [ADDR_WIDTH-1-REGION_LSB:0] TIMER_HI = BASE_TIMER[ADDR_WIDTH-1:REGION_LSB];

    // ---------------------------------------------------------------------
    // DUT
    // ---------------------------------------------------------------------
    axi_lite_crossbar #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .DATA_WIDTH (DATA_WIDTH),
        .NMST       (NMST),
        .NSLV       (NSLV),
        .REGION_LSB (REGION_LSB)
    ) u_dut (
        .clk (clk), .rst (rst),
        .m_axil_awaddr (m_awaddr), .m_axil_awprot (m_awprot),
        .m_axil_awvalid (m_awvalid), .m_axil_awready (m_awready),
        .m_axil_wdata (m_wdata), .m_axil_wstrb (m_wstrb),
        .m_axil_wvalid (m_wvalid), .m_axil_wready (m_wready),
        .m_axil_bresp (m_bresp), .m_axil_bvalid (m_bvalid), .m_axil_bready (m_bready),
        .m_axil_araddr (m_araddr), .m_axil_arprot (m_arprot),
        .m_axil_arvalid (m_arvalid), .m_axil_arready (m_arready),
        .m_axil_rdata (m_rdata), .m_axil_rresp (m_rresp),
        .m_axil_rvalid (m_rvalid), .m_axil_rready (m_rready),
        .s_axil_awaddr (s_awaddr), .s_axil_awprot (s_awprot),
        .s_axil_awvalid (s_awvalid), .s_axil_awready (s_awready),
        .s_axil_wdata (s_wdata), .s_axil_wstrb (s_wstrb),
        .s_axil_wvalid (s_wvalid), .s_axil_wready (s_wready),
        .s_axil_bresp (s_bresp), .s_axil_bvalid (s_bvalid), .s_axil_bready (s_bready),
        .s_axil_araddr (s_araddr), .s_axil_arprot (s_arprot),
        .s_axil_arvalid (s_arvalid), .s_axil_arready (s_arready),
        .s_axil_rdata (s_rdata), .s_axil_rresp (s_rresp),
        .s_axil_rvalid (s_rvalid), .s_axil_rready (s_rready)
    );

`ifndef AXIL_FML_RTL_ONLY

    // ---------------------------------------------------------------------
    // Independent decode of the documented map (used by the monitors, not by
    // the DUT).  decode.sby proves the DUT's decoder against the same map.
    // ---------------------------------------------------------------------
    function automatic logic [NTGT-1:0] tgt_of(
        input logic [ADDR_WIDTH-1-REGION_LSB:0] addr_hi
    );
        logic [NTGT-1:0] sel;
        begin
            sel = '0;
            if (addr_hi == UART_HI)  sel[0] = 1'b1;
            if (addr_hi == GPIO_HI)  sel[1] = 1'b1;
            if (addr_hi == TIMER_HI) sel[2] = 1'b1;
            if (!(|sel[NSLV-1:0])) sel[NSLV] = 1'b1;   // error target
            tgt_of = sel;
        end
    endfunction

    // ---------------------------------------------------------------------
    // Handshake strobes at the master boundary
    // ---------------------------------------------------------------------
    logic [NMST-1:0] aw_hs, w_hs, b_hs, ar_hs, r_hs;
    assign aw_hs = m_awvalid & m_awready;
    assign w_hs  = m_wvalid  & m_wready;
    assign b_hs  = m_bvalid  & m_bready;
    assign ar_hs = m_arvalid & m_arready;
    assign r_hs  = m_rvalid  & m_rready;

    // ---------------------------------------------------------------------
    // Monitor: what each master port has accepted and not yet had answered.
    //   wr_out[m] : both halves accepted, response not yet consumed
    //   rd_out[m] : read accepted, response not yet consumed
    // The slot is freed by the response handshake; an acceptance in that same
    // cycle opens the next transaction (legal pipelining at the boundary).
    // ---------------------------------------------------------------------
    logic [NMST-1:0]                    aw_seen_q, w_seen_q, rd_seen_q;
    logic [NMST-1:0][ADDR_WIDTH-1:0]    mon_awaddr_q, mon_araddr_q;
    logic [NMST-1:0][DATA_WIDTH-1:0]    mon_wdata_q;
    logic [NMST-1:0][DATA_WIDTH/8-1:0]  mon_wstrb_q;
    logic [NMST-1:0][NTGT-1:0]          mon_wtgt_q, mon_rtgt_q;

    logic [NMST-1:0] wr_out, rd_out;
    assign wr_out = aw_seen_q & w_seen_q;
    assign rd_out = rd_seen_q;

    // ---------------------------------------------------------------------
    // Counters: requests accepted and responses completed, per master.
    // Saturating, so that the counting invariant below is inductive and
    // independent of how long the proof runs.
    // ---------------------------------------------------------------------
    logic [NMST-1:0][CNT_W-1:0] aw_cnt, w_cnt, b_cnt, ar_cnt, r_cnt;

    always_ff @(posedge clk) begin
        if (rst) begin
            aw_seen_q   <= '0;
            w_seen_q    <= '0;
            rd_seen_q   <= '0;
            mon_awaddr_q <= '0;
            mon_wdata_q  <= '0;
            mon_wstrb_q  <= '0;
            mon_wtgt_q   <= '0;
            mon_araddr_q <= '0;
            mon_rtgt_q   <= '0;
            aw_cnt <= '0;
            w_cnt  <= '0;
            b_cnt  <= '0;
            ar_cnt <= '0;
            r_cnt  <= '0;
        end else begin
            for (int unsigned m = 0; m < NMST; m++) begin
                // ---- write slots ----
                if (b_hs[m]) begin
                    aw_seen_q[m] <= aw_hs[m];
                    w_seen_q[m]  <= w_hs[m];
                end else begin
                    if (aw_hs[m]) begin
                        aw_seen_q[m]  <= 1'b1;
                        mon_awaddr_q[m] <= m_awaddr[m];
                        mon_wtgt_q[m]   <= tgt_of(m_awaddr[m][ADDR_WIDTH-1:REGION_LSB]);
                    end
                    if (w_hs[m]) begin
                        w_seen_q[m]   <= 1'b1;
                        mon_wdata_q[m] <= m_wdata[m];
                        mon_wstrb_q[m] <= m_wstrb[m];
                    end
                end

                // ---- read slot ----
                if (r_hs[m]) begin
                    rd_seen_q[m] <= ar_hs[m];
                end else if (ar_hs[m]) begin
                    rd_seen_q[m] <= 1'b1;
                end
                if (ar_hs[m]) begin
                    mon_araddr_q[m] <= m_araddr[m];
                    mon_rtgt_q[m]   <= tgt_of(m_araddr[m][ADDR_WIDTH-1:REGION_LSB]);
                end

                // ---- counters ----
                if (aw_hs[m] && (aw_cnt[m] != CNT_SAT)) aw_cnt[m] <= aw_cnt[m] + 1'b1;
                if (w_hs[m]  && (w_cnt[m]  != CNT_SAT)) w_cnt[m]  <= w_cnt[m]  + 1'b1;
                if (b_hs[m]  && (b_cnt[m]  != CNT_SAT)) b_cnt[m]  <= b_cnt[m]  + 1'b1;
                if (ar_hs[m] && (ar_cnt[m] != CNT_SAT)) ar_cnt[m] <= ar_cnt[m] + 1'b1;
                if (r_hs[m]  && (r_cnt[m]  != CNT_SAT)) r_cnt[m]  <= r_cnt[m]  + 1'b1;
            end
        end
    end

    // ---------------------------------------------------------------------
    // Property helpers (combinational; one aggregated assertion per property
    // because Yosys does not scope assertion names by loop index).
    // ---------------------------------------------------------------------

    // (1) No response without a request from that master.
    logic resp_needs_request_ok;

    // (2) The response a master sees is its own target's response.
    logic b_from_owner_ok, r_from_owner_ok;

    // (3) No cross-talk: a slave port is presented with the payload of a master
    //     whose address decodes to that slave.
    logic aw_from_owner_ok, w_from_owner_ok, ar_from_owner_ok;

    // (4) No duplicate completion / no phantom completion.
    logic no_dup_write_ok, no_dup_read_ok;

    // (5) At most one outstanding write and one outstanding read per master.
    logic one_outstanding_ok;

    // Loop-local match flags for property (3).
    logic match_aw, match_w, match_ar;

    always_comb begin
        match_aw              = 1'b0;
        match_w               = 1'b0;
        match_ar              = 1'b0;
        resp_needs_request_ok = 1'b1;
        b_from_owner_ok       = 1'b1;
        r_from_owner_ok       = 1'b1;
        aw_from_owner_ok      = 1'b1;
        w_from_owner_ok       = 1'b1;
        ar_from_owner_ok      = 1'b1;
        no_dup_write_ok       = 1'b1;
        no_dup_read_ok        = 1'b1;
        one_outstanding_ok    = 1'b1;

        for (int unsigned m = 0; m < NMST; m++) begin
            // (1)
            if (m_bvalid[m] && !wr_out[m]) resp_needs_request_ok = 1'b0;
            if (m_rvalid[m] && !rd_out[m]) resp_needs_request_ok = 1'b0;

            // (2) write response
            if (m_bvalid[m]) begin
                if (mon_wtgt_q[m][NSLV]) begin
                    // error target: DECERR and nothing else
                    if (m_bresp[m] != `AXIL_RESP_DECERR) b_from_owner_ok = 1'b0;
                end else begin
                    for (int unsigned s = 0; s < NSLV; s++) begin
                        if (mon_wtgt_q[m][s]) begin
                            if (!s_bvalid[s] || (m_bresp[m] != s_bresp[s])) begin
                                b_from_owner_ok = 1'b0;
                            end
                        end
                    end
                end
            end

            // (2) read response
            if (m_rvalid[m]) begin
                if (mon_rtgt_q[m][NSLV]) begin
                    if ((m_rresp[m] != `AXIL_RESP_DECERR) || (m_rdata[m] != '0)) r_from_owner_ok = 1'b0;
                end else begin
                    for (int unsigned s = 0; s < NSLV; s++) begin
                        if (mon_rtgt_q[m][s]) begin
                            if (!s_rvalid[s] || (m_rresp[m] != s_rresp[s]) ||
                                (m_rdata[m] != s_rdata[s])) begin
                                r_from_owner_ok = 1'b0;
                            end
                        end
                    end
                end
            end

            // (3) AW/AR: the address presented to a slave must be the captured
            //     address of a master that decodes to that slave.
            for (int unsigned s = 0; s < NSLV; s++) begin
                if (s_awvalid[s]) begin
                    match_aw = 1'b0;
                    for (int unsigned mm = 0; mm < NMST; mm++) begin
                        if (mon_wtgt_q[mm][s] && (mon_awaddr_q[mm] == s_awaddr[s])) begin
                            match_aw = 1'b1;
                        end
                    end
                    if (!match_aw) aw_from_owner_ok = 1'b0;
                end
                if (s_wvalid[s]) begin
                    match_w = 1'b0;
                    for (int unsigned mm = 0; mm < NMST; mm++) begin
                        if (mon_wtgt_q[mm][s] && (mon_wdata_q[mm] == s_wdata[s]) &&
                            (mon_wstrb_q[mm] == s_wstrb[s])) begin
                            match_w = 1'b1;
                        end
                    end
                    if (!match_w) w_from_owner_ok = 1'b0;
                end
                if (s_arvalid[s]) begin
                    match_ar = 1'b0;
                    for (int unsigned mm = 0; mm < NMST; mm++) begin
                        if (mon_rtgt_q[mm][s] && (mon_araddr_q[mm] == s_araddr[s])) begin
                            match_ar = 1'b1;
                        end
                    end
                    if (!match_ar) ar_from_owner_ok = 1'b0;
                end
            end

            // (4) A write cannot complete more times than it was accepted, and
            //     while one is outstanding strictly fewer completions than
            //     acceptances have been seen.
            if (b_cnt[m] > aw_cnt[m]) no_dup_write_ok = 1'b0;
            if (b_cnt[m] > w_cnt[m])  no_dup_write_ok = 1'b0;
            if (wr_out[m]) begin
                if (b_cnt[m] >= aw_cnt[m]) no_dup_write_ok = 1'b0;
                if (b_cnt[m] >= w_cnt[m])  no_dup_write_ok = 1'b0;
            end
            if (r_cnt[m] > ar_cnt[m]) no_dup_read_ok = 1'b0;
            if (rd_out[m] && (r_cnt[m] >= ar_cnt[m])) no_dup_read_ok = 1'b0;

            // (5) A master may not have a second AW/W accepted while one is
            //     outstanding, nor a second AR.
            if (aw_hs[m] && aw_seen_q[m] && !b_hs[m]) one_outstanding_ok = 1'b0;
            if (w_hs[m]  && w_seen_q[m]  && !b_hs[m]) one_outstanding_ok = 1'b0;
            if (ar_hs[m] && rd_seen_q[m] && !r_hs[m]) one_outstanding_ok = 1'b0;
        end
    end

`endif // AXIL_FML_RTL_ONLY

    // ---------------------------------------------------------------------
    // Initial state: the design is reset at time 0.
    //
    // This is the ONLY environment assumption in this job, and it is how the
    // design is used: after one cycle of `rst` every flip-flop in this design
    // holds its reset value (all of them are synchronously reset), so the proof
    // starts from exactly the state a real reset leaves behind instead of from
    // an arbitrary unreachable state.
    // ---------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if ($initstate) begin
            ap_init_reset: assume property (rst);
        end
    end

    // ---------------------------------------------------------------------
    // Assertions
    // ---------------------------------------------------------------------
`ifndef AXIL_FML_RTL_ONLY
    always_ff @(posedge clk) begin
        if (!rst) begin
            ap_resp_needs_request:  assert property (resp_needs_request_ok);
            ap_b_from_owner:        assert property (b_from_owner_ok);
            ap_r_from_owner:        assert property (r_from_owner_ok);
            ap_aw_from_owner:       assert property (aw_from_owner_ok);
            ap_w_from_owner:        assert property (w_from_owner_ok);
            ap_ar_from_owner:       assert property (ar_from_owner_ok);
            ap_no_duplicate_write:  assert property (no_dup_write_ok);
            ap_no_duplicate_read:   assert property (no_dup_read_ok);
            ap_one_outstanding:     assert property (one_outstanding_ok);
        end
    end
`endif // AXIL_FML_RTL_ONLY

endmodule
