// -----------------------------------------------------------------------------
// axi_lite_address_decoder.sv
//
// Combinational address decoder for NSLV_REAL power-of-two-sized regions.
//
//   sel[NSLV_REAL-1:0] : one-hot region select
//   sel[NSLV_REAL]     : "no region matched" (internal error target)
//   hit                : 1 when the address falls inside a real region
//
// Properties (proved in formal/decode.sby, not assumed):
//   * sel is ALWAYS one-hot  (mutually exclusive + exhaustive)
//   * hit == ~sel[NSLV_REAL]
//   * hit implies the address is inside the region addressed by sel
//
// Region bases are passed as a FLAT vector rather than a packed array of
// parameters because Yosys/SymbiYosys 0.70 cannot parse packed-array
// parameters. Only addr[ADDR_WIDTH-1:REGION_LSB] participates in the compare,
// which is what makes a whole 2**REGION_LSB region map to one slave.
// -----------------------------------------------------------------------------

`include "axil_defs.svh"

module axi_lite_address_decoder #(
    parameter int unsigned ADDR_WIDTH = `AXIL_ADDR_WIDTH,
    parameter int unsigned NSLV_REAL  = `AXIL_NSLV,
    parameter int unsigned REGION_LSB = `AXIL_REGION_LSB,
    // Default: the address map of rtl/axil_defs.svh (see `AXIL_BASE_FLAT_3).
    parameter logic [NSLV_REAL*ADDR_WIDTH-1:0] BASE_FLAT = `AXIL_BASE_FLAT_3
) (
    input  logic [ADDR_WIDTH-1:0] addr,
    output logic [NSLV_REAL:0]    sel,
    output logic                  hit
);

    // Width of the compared field.
    localparam int unsigned CMP_W = ADDR_WIDTH - REGION_LSB;

    always_comb begin
        sel = {(NSLV_REAL + 1) {1'b0}};

        for (int unsigned i = 0; i < NSLV_REAL; i++) begin
            if (addr[ADDR_WIDTH-1:REGION_LSB] ==
                BASE_FLAT[i*ADDR_WIDTH + REGION_LSB +: CMP_W]) begin
                sel[i] = 1'b1;
            end
        end

        // Unmapped address -> internal error target. Keeps sel one-hot.
        sel[NSLV_REAL] = ~|sel[NSLV_REAL-1:0];
        hit = ~sel[NSLV_REAL];
    end

`ifdef AXIL_ASSERTIONS
    // Immediate assertions inside always_comb: this block is purely
    // combinational, so there is no clock to hang a concurrent assertion on.
    // (Verilator rejects `assert property` without a clocking event in
    // always_comb; both Verilator's --assert and Yosys/SymbiYosys check immediate
    // assertions.)
    always_comb begin
        ap_sel_onehot: assert ($onehot(sel));
        ap_hit_def:    assert (hit == ~sel[NSLV_REAL]);
    end
`endif


    // The low REGION_LSB address bits are deliberately not compared: they select
    // a byte inside the region, and the whole region maps to one slave. XOR-ing
    // them here keeps the tool chain from reporting them as an unused input while
    // making clear that they do not participate in the region compare.
    logic unused_lo;
    assign unused_lo = ^addr;
endmodule
