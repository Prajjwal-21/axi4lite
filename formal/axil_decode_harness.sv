// -----------------------------------------------------------------------------
// formal/axil_decode_harness.sv
//
// FORMAL HARNESS (testbench-side, not synthesizable, not part of the design).
//
// Proves the address decoder against the address map DOCUMENTED in
// docs/register_map.md, independently of how the decoder is written:
//
//   For every 32-bit address and every region of the documented 3-region map,
//       sel[i]  ==  (addr[31:REGION_LSB] == BASE[i][31:REGION_LSB])
//   and therefore
//       * sel is one-hot and exhaustive (the "no region matched" bit is the
//         complement of the union),
//       * hit == ~sel[NSLV_REAL],
//       * two regions never both match  (mutual exclusion),
//       * a region matches exactly for the addresses it owns and for no other
//         address (correctly bounded: no overlap, no hole).
//
// WHY THE BASES ARE WRITTEN OUT HERE
//   The region bases are literal constants taken from the human-readable map
//   (UART 0x0000_0000, GPIO 0x0000_4000, TIMER 0x0000_8000, 4 KiB regions), not
//   from the RTL's parameter.  A mistake in the RTL's BASE_FLAT wiring or in the
//   way it slices the address therefore cannot hide behind the same expression.
//
// SCOPE
//   The proof covers the 3-region configuration this project ships (`AXIL_NSLV`
//   = 3), which is the only configuration instantiated.  The decoder's region
//   loop is structural, but a different NSLV_REAL is not proven here.
//
// `addr` is a free input: the solver explores every 2**32 address, no
// simulation, no seed.  Configuration: formal/decode.sby.
// -----------------------------------------------------------------------------

module axil_decode_harness #(
    parameter int unsigned ADDR_WIDTH = 32,
    parameter int unsigned NSLV_REAL  = 3,
    parameter int unsigned REGION_LSB = 12
) (
    input logic clk,
    // Free input: the whole point of the proof is that it covers every address.
    input logic [ADDR_WIDTH-1:0] addr
);

    // Documented address map (docs/register_map.md).
    localparam logic [ADDR_WIDTH-1:0] BASE_UART  = 32'h0000_0000;
    localparam logic [ADDR_WIDTH-1:0] BASE_GPIO  = 32'h0000_4000;
    localparam logic [ADDR_WIDTH-1:0] BASE_TIMER = 32'h0000_8000;

    // The field the decoder compares: addr[ADDR_WIDTH-1:REGION_LSB].
    logic [ADDR_WIDTH-1-REGION_LSB:0] addr_hi;
    assign addr_hi = addr[ADDR_WIDTH-1:REGION_LSB];

    logic [NSLV_REAL:0] sel;
    logic               hit;

    axi_lite_address_decoder #(
        .ADDR_WIDTH (ADDR_WIDTH),
        .NSLV_REAL  (NSLV_REAL),
        .REGION_LSB (REGION_LSB)
    ) u_dec (
        .addr (addr),
        .sel  (sel),
        .hit  (hit)
    );

    always_ff @(posedge clk) begin
        // Mutually exclusive + exhaustive.
        ap_sel_onehot: assert ($onehot(sel));

        // hit is exactly "a real region matched".
        ap_hit_definition: assert (hit == ~sel[NSLV_REAL]);

        // Correctly bounded: each region matches exactly the addresses it owns.
        ap_uart_matches_iff_owned: assert (
            sel[0] == (addr_hi == BASE_UART[ADDR_WIDTH-1:REGION_LSB]));
        ap_gpio_matches_iff_owned: assert (
            sel[1] == (addr_hi == BASE_GPIO[ADDR_WIDTH-1:REGION_LSB]));
        ap_timer_matches_iff_owned: assert (
            sel[2] == (addr_hi == BASE_TIMER[ADDR_WIDTH-1:REGION_LSB]));

        // No region match <=> the internal error target is selected.
        ap_error_target_when_unmapped: assert (
            sel[NSLV_REAL] == ~(sel[0] | sel[1] | sel[2]));
    end

endmodule
