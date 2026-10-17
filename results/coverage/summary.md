# Coverage summary

Generated 2026-10-17 15:21:03 IST by `scripts/coverage.sh` (cocotb regression, seed 1; Verilator `--coverage-line --coverage-toggle`).

## Verification regression

* 38 tests passed, 0 failed, 0 skipped across 4 module run(s) (this run; xUnit files under `results/cocotb/`)

## Verilator line + toggle coverage

| source | lines hit/total | toggles hit/total | branches hit/total |
| --- | --- | --- | --- |
| `rtl/axi_lite_address_decoder.sv` | 6/6 | 152/152 | 4/4 |
| `rtl/axi_lite_arbiter.sv` | 10/10 | 108/132 | 20/20 |
| `rtl/axi_lite_crossbar.sv` | 44/44 | 4866/8400 | 60/88 |
| `rtl/axi_lite_master_port.sv` | 16/16 | 1636/1864 | 60/60 |
| `rtl/axi_lite_slave_port.sv` | 12/12 | 1446/1880 | 24/24 |
| `rtl/axil_error_slave.sv` | 8/8 | 384/656 | 36/36 |
| `rtl/axil_regfile_slave.sv` | 16/16 | 1050/1308 | 36/36 |
| `rtl/gpio_regs.sv` | 50/50 | 799/1444 | 32/32 |
| `rtl/peripheral_subsystem.sv` | 0/0 | 1049/1582 | 0/0 |
| `rtl/timer_regs.sv` | 62/62 | 1059/1376 | 47/48 |
| `rtl/uart_regs.sv` | 75/80 | 939/2068 | 90/92 |
| `tb/assertions/axil_protocol_checker.sv` | 80/96 | 1052/2480 | 96/120 |
| `tb/harness/conv_probe.sv` | 1/1 | 30/30 | 2/2 |
| `tb/harness/crossbar_checker_top.sv` | 0/0 | 784/1524 | 0/0 |
| `tb/harness/peripheral_unit_harness.sv` | 0/0 | 532/974 | 0/0 |
| `tb/harness/subsystem_checker_top.sv` | 0/0 | 531/670 | 0/0 |
| **rtl/ total** | 299/304 (98.4%) | 13488/20862 (64.7%) | 409/440 (93.0%) |
| tb/ + harness total | 81/97 (83.5%) | 2929/5678 (51.6%) | 98/122 (80.3%) |

Per-source annotated listings: `results/coverage/annotate/` (`verilator_coverage --annotate`); branch coverage comes from Verilator's expression/condition instrumentation.

## Functional coverage (cocotb, crossbar DUT)

### functional_crossbar_checker_top_axil_crossbar_tests_s1: 55/84 bins hit (65.5%)

| coverpoint | bin | count |
| --- | --- | --- |
| `slave0_activity` | `ar` | 7 |
| `slave0_activity` | `aw` | 23 |
| `slave0_activity` | `b` | 22 |
| `slave0_activity` | `r` | 7 |
| `slave0_activity` | `w` | 23 |
| `slave1_activity` | `ar` | 11 |
| `slave1_activity` | `aw` | 18 |
| `slave1_activity` | `b` | 18 |
| `slave1_activity` | `r` | 11 |
| `slave1_activity` | `w` | 18 |
| `slave2_activity` | `ar` | 16 |
| `slave2_activity` | `aw` | 35 |
| `slave2_activity` | `b` | 35 |
| `slave2_activity` | `r` | 16 |
| `slave2_activity` | `w` | 35 |
| `xbar.ar_backpressure` | `0` | 38 |
| `xbar.ar_backpressure` | `1` | 0 |
| `xbar.ar_backpressure` | `17+` | 0 |
| `xbar.ar_backpressure` | `2-4` | 0 |
| `xbar.ar_backpressure` | `5-16` | 0 |
| `xbar.aw_backpressure` | `0` | 88 |
| `xbar.aw_backpressure` | `1` | 0 |
| `xbar.aw_backpressure` | `17+` | 0 |
| `xbar.aw_backpressure` | `2-4` | 0 |
| `xbar.aw_backpressure` | `5-16` | 1 |
| `xbar.b_backpressure` | `0` | 87 |
| `xbar.b_backpressure` | `1` | 0 |
| `xbar.b_backpressure` | `17+` | 0 |
| `xbar.b_backpressure` | `2-4` | 0 |
| `xbar.b_backpressure` | `5-16` | 0 |
| `xbar.r_backpressure` | `0` | 38 |
| `xbar.r_backpressure` | `1` | 0 |
| `xbar.r_backpressure` | `17+` | 0 |
| `xbar.r_backpressure` | `2-4` | 0 |
| `xbar.r_backpressure` | `5-16` | 0 |
| `xbar.read_concurrency` | `0` | 1918 |
| `xbar.read_concurrency` | `1` | 537 |
| `xbar.read_concurrency` | `2` | 33 |
| `xbar.read_concurrency` | `2_same_target` | 69 |
| `xbar.read_resp` | `m0_DECERR` | 0 |
| `xbar.read_resp` | `m0_OKAY` | 20 |
| `xbar.read_resp` | `m0_SLVERR` | 0 |
| `xbar.read_resp` | `m1_DECERR` | 4 |
| `xbar.read_resp` | `m1_OKAY` | 14 |
| `xbar.read_resp` | `m1_SLVERR` | 0 |
| `xbar.read_target` | `m0_err` | 0 |
| `xbar.read_target` | `m0_s0` | 3 |
| `xbar.read_target` | `m0_s1` | 7 |
| `xbar.read_target` | `m0_s2` | 10 |
| `xbar.read_target` | `m1_err` | 4 |
| `xbar.read_target` | `m1_s0` | 4 |
| `xbar.read_target` | `m1_s1` | 4 |
| `xbar.read_target` | `m1_s2` | 6 |
| `xbar.w_backpressure` | `0` | 89 |
| `xbar.w_backpressure` | `1` | 0 |
| `xbar.w_backpressure` | `17+` | 0 |
| `xbar.w_backpressure` | `2-4` | 0 |
| `xbar.w_backpressure` | `5-16` | 0 |
| `xbar.wr_rd_overlap` | `m0_both` | 0 |
| `xbar.wr_rd_overlap` | `m1_both` | 0 |
| `xbar.write_concurrency` | `0` | 1106 |
| `xbar.write_concurrency` | `1` | 1242 |
| `xbar.write_concurrency` | `2` | 76 |
| `xbar.write_concurrency` | `2_same_target` | 133 |
| `xbar.write_resp` | `m0_DECERR` | 12 |
| `xbar.write_resp` | `m0_OKAY` | 47 |
| `xbar.write_resp` | `m0_SLVERR` | 0 |
| `xbar.write_resp` | `m1_DECERR` | 0 |
| `xbar.write_resp` | `m1_OKAY` | 28 |
| `xbar.write_resp` | `m1_SLVERR` | 0 |
| `xbar.write_target` | `m0_err` | 12 |
| `xbar.write_target` | `m0_s0` | 18 |
| `xbar.write_target` | `m0_s1` | 7 |
| `xbar.write_target` | `m0_s2` | 24 |
| `xbar.write_target` | `m1_err` | 0 |
| `xbar.write_target` | `m1_s0` | 6 |
| `xbar.write_target` | `m1_s1` | 11 |
| `xbar.write_target` | `m1_s2` | 11 |
| `xbar.wstrb` | `all_bytes` | 66 |
| `xbar.wstrb` | `partial` | 11 |
| `xbar.wstrb` | `single_b0` | 2 |
| `xbar.wstrb` | `single_b1` | 2 |
| `xbar.wstrb` | `single_b2` | 4 |
| `xbar.wstrb` | `single_b3` | 4 |

## Reproduce

```sh
scripts/coverage.sh            # regression + .dat + info + this report
verilator_coverage --rank results/coverage/coverage.info
```
