//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // tb/harness/conv_probe.sv
        //
        // Testbench-only DUT for the timing-convention self-check.
        //
        // The cocotb environment depends on one measured fact about this toolchain:
        // a value driven at the falling edge is captured by the rising edge that ends
        // the same cycle, and a settled read is available 1 ns after a rising edge.
        // `tests/axil_env_tests.py::test_timing_convention` drives this probe and
        // checks the convention explicitly, so a toolchain change cannot silently
        // invalidate every other test.
        // -----------------------------------------------------------------------------
        
        module conv_probe (
 000022     input  logic       clk,
%000003     input  logic       rst,
%000006     input  logic [3:0] d,
%000006     output logic [3:0] q,
%000006     output logic [3:0] qc,
%000003     output logic       y
        );
 000022     always_ff @(posedge clk) begin
 000012         if (rst) q <= 4'h0;
 000012         else     q <= d;
            end
        
            // Combinational shadow of `d & ~q`: reacts inside the same cycle, which is
            // what makes a mis-timed read visible.
            assign qc = d & ~q;
            assign y  = |q;
        endmodule
        
