//      // verilator_coverage annotation
        // -----------------------------------------------------------------------------
        // axi_lite_arbiter.sv
        //
        // Round-robin arbiter with "hold until done" semantics.
        //
        // Algorithm: rotate the request vector so that the master the pointer points at
        // gets highest priority, then isolate the lowest set bit of the rotated vector.
        // This is a single combinational priority selection with no lock-up because the
        // grant is REGISTERED and is held until `done` is asserted for the granted
        // transaction.
        //
        //   ptr  : index that currently has highest priority (advanced on every grant)
        //   req  : request vector, must be held asserted until the requester is granted
        //          (the crossbar guarantees this: requests come from registered pending
        //           flags that are not cleared until the transaction completes)
        //   done : asserted for one cycle when the granted transaction has completed
        //          (B handshake for the write path, R handshake for the read path)
        //   gnt  : registered one-hot grant; zero when idle
        //
        // Fairness: ptr advances to (granted index + 1) modulo N on every grant, so with
        // continuously asserted requests the grants rotate strictly.
        //
        // Outputs are registered, so `gnt` is glitch-free and is safe to drive an AXI
        // VALID directly (AXI requires VALID to be stable while it waits for READY).
        // -----------------------------------------------------------------------------
        
        `include "axil_defs.svh"
        
        module axi_lite_arbiter #(
            parameter int unsigned N = 2          // number of requesters
        ) (
 009136     input  logic         clk,
 000120     input  logic         rst,
 000163     input  logic [N-1:0] req,
 000275     input  logic         done,
 000163     output logic [N-1:0] gnt
        );
        
            localparam int unsigned PTRW = (N > 1) ? $clog2(N) : 1;
            localparam int unsigned DW = 2 * N;
        
 000064     logic [PTRW-1:0] ptr;
 000163     logic [N-1:0] gnt_q;
        
            // ---- combinational round-robin priority selection ----------------------
 000163     logic [DW-1:0] dbl_req;
~000067     logic [DW-1:0] onehot_ptr;
~000064     logic [DW-1:0] below_ptr;
 000163     logic [DW-1:0] masked;
~000162     logic [DW-1:0] pick;
 000163     logic [N-1:0]  rr_gnt;
 000064     logic [PTRW-1:0] nxt_idx;
        
 068696     always_comb begin
 068696         dbl_req    = {req, req};
 068696         onehot_ptr = {{(DW - 1) {1'b0}}, 1'b1} << ptr;
 068696         below_ptr  = onehot_ptr - {{(DW - 1) {1'b0}}, 1'b1};   // ones below ptr
 068696         masked     = dbl_req & ~below_ptr;                     // candidates >= ptr
 068696         pick       = masked & (~masked + {{(DW - 1) {1'b0}}, 1'b1}); // lowest set bit
        
                // Exactly one half of `pick` can be set, so OR-ing the halves is safe.
 068696         rr_gnt = pick[N-1:0] | pick[DW-1:N];
        
                // next priority index = granted index + 1 (mod N)
 068696         nxt_idx = ptr;
 137392         for (int unsigned i = 0; i < N; i++) begin
 133197             if (rr_gnt[i]) begin
 004195                 nxt_idx = (i == (N - 1)) ? {PTRW{1'b0}} : PTRW'(i + 1);
                    end
                end
            end
        
            // ---- grant register ---------------------------------------------------
            // A new grant is selected when the arbiter is idle or when the current
            // transaction has just completed. While a transaction is in flight
            // (|gnt_q && !done) the grant is held so that response routing by owner
            // stays valid.
 009136     always_ff @(posedge clk) begin
 000520         if (rst) begin
 000520             gnt_q <= {N{1'b0}};
 000520             ptr   <= {PTRW{1'b0}};
 008510         end else if (done || (|gnt_q == 1'b0)) begin
 008510             gnt_q <= rr_gnt;
 008235             if (|rr_gnt) begin
 000275                 ptr <= nxt_idx;
                    end
                end
            end
        
            assign gnt = gnt_q;
        
        `ifdef AXIL_ASSERTIONS
            // Immediate assertions (Yosys + Verilator compatible). Not part of the
            // synthesizable design; enabled only when AXIL_ASSERTIONS is defined.
 009136     always_ff @(posedge clk) begin
 008912         if (!rst) begin
 008912             ap_gnt_onehot: assert property ($onehot0(gnt));
                end
            end
        `endif
        
        endmodule
        
