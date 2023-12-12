#define main mpz_t_set_f_main
#define check_one mpz_t_set_f_check_one
#define check_various mpz_t_set_f_check_various
#include "tests/mpz/t-set_f.c"
#undef check_one
#undef check_various
#undef main

#define main mpz_t_pow_main
#define check_one mpz_t_pow_check_one
#define check_rand mpz_t_pow_check_rand
#define check_random mpz_t_pow_check_random
#define check_various mpz_t_pow_check_various
#include "tests/mpz/t-pow.c"
#undef check_one
#undef check_rand
#undef check_random
#undef check_various
#undef main

#define main mpz_t_addsub_main
#define debug_mp mpz_t_addsub_debug_mp
#define dump_abort mpz_t_addsub_dump_abort
#include "tests/mpz/t-addsub.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_mul_i_main
#define x mpz_t_mul_i_x
#define check_samples mpz_t_mul_i_check_samples
#include "tests/mpz/t-mul_i.c"
#undef x
#undef check_samples
#undef main

#define main mpz_dive_main
#include "tests/mpz/dive.c"
#undef main

#define main mpz_t_scan_main
#include "tests/mpz/t-scan.c"
#undef main

#define main mpz_t_fib_ui_main
#include "tests/mpz/t-fib_ui.c"
#undef main

#define main mpz_t_powm_ui_main
#include "tests/mpz/t-powm_ui.c"
#undef main

#define main mpz_t_get_d_main
#define check_one mpz_t_get_d_check_one
#define check_onebit mpz_t_get_d_check_onebit
#include "tests/mpz/t-get_d.c"
#undef check_one
#undef check_onebit
#undef main

#define main mpz_t_tdiv_ui_main
#define debug_mp mpz_t_tdiv_ui_debug_mp
#define dump_abort mpz_t_tdiv_ui_dump_abort
#include "tests/mpz/t-tdiv_ui.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_gcd_main
#define check_data mpz_t_gcd_check_data
#define debug_mp mpz_t_gcd_debug_mp
#include "tests/mpz/t-gcd.c"
#undef check_data
#undef debug_mp
#undef main

#define main mpz_t_bit_main
#define debug_mp mpz_t_bit_debug_mp
#define check_rand mpz_t_bit_check_rand
#define check_random mpz_t_bit_check_random
#include "tests/mpz/t-bit.c"
#undef debug_mp
#undef check_rand
#undef check_random
#undef FAIL
#undef main

#define main mpz_t_io_raw_main
#define check_rand mpz_t_io_raw_check_rand
#include "tests/mpz/t-io_raw.c"
#undef check_rand
#undef FILENAME
#undef main

#define main mpz_t_oddeven_main
#define check_data mpz_t_oddeven_check_data
#include "tests/mpz/t-oddeven.c"
#undef check_data
#undef main

#define main mpz_logic_main
#define debug_mp mpz_logic_debug_mp
#define dump_abort mpz_logic_dump_abort
#include "tests/mpz/logic.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_lucm_main
#define debug_mp mpz_t_lucm_debug_mp
#include "tests/mpz/t-lucm.c"
#undef debug_mp
#undef SIZEM
#undef main

#define main mpz_t_lcm_main
#define check_primes mpz_t_lcm_check_primes
#include "tests/mpz/t-lcm.c"
#undef check_primes
#undef main

#define main mpz_io_main
#define debug_mp mpz_io_debug_mp
#include "tests/mpz/io.c"
#undef debug_mp
#undef FILENAME
#undef main

#define main mpz_t_jac_main
#define check_data mpz_t_jac_check_data
#include "tests/mpz/t-jac.c"
#undef check_data
#undef COUNT
#undef main

#define main mpz_t_fdiv_ui_main
#define debug_mp mpz_t_fdiv_ui_debug_mp
#define dump_abort mpz_t_fdiv_ui_dump_abort
#include "tests/mpz/t-fdiv_ui.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_inp_str_main
#define check_data mpz_t_inp_str_check_data
#include "tests/mpz/t-inp_str.c"
#undef check_data
#undef FILENAME
#undef main

#define main mpz_t_get_si_main
#define check_data mpz_t_get_si_check_data
#include "tests/mpz/t-get_si.c"
#undef check_data
#undef CHECK_MAX
#undef main

#define main mpz_t_sqrtrem_main
#define debug_mp mpz_t_sqrtrem_debug_mp
#define dump_abort mpz_t_sqrtrem_dump_abort
#include "tests/mpz/t-sqrtrem.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_divis_main
#define check_data mpz_t_divis_check_data
#define check_one mpz_t_divis_check_one
#define check_rand mpz_t_divis_check_rand
#define check_random mpz_t_divis_check_random
#include "tests/mpz/t-divis.c"
#undef check_data
#undef check_one
#undef check_rand
#undef check_random
#undef main

#define main mpz_t_invert_main
#include "tests/mpz/t-invert.c"
#undef main

#define main mpz_t_tdiv_main
#define debug_mp mpz_t_tdiv_debug_mp
#define dump_abort mpz_t_tdiv_dump_abort
#include "tests/mpz/t-tdiv.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_nextprime_main
#include "tests/mpz/t-nextprime.c"
#undef main

#define main mpz_t_fac_ui_main
#include "tests/mpz/t-fac_ui.c"
#undef main

#define main mpz_t_primorial_ui_main
#define isprime mpz_t_primorial_ui_isprime
#include "tests/mpz/t-primorial_ui.c"
#undef isprime
#undef main

#define main mpz_t_divis_2exp_main
#define check_data mpz_t_divis_2exp_check_data
#define check_one mpz_t_divis_2exp_check_one
#include "tests/mpz/t-divis_2exp.c"
#undef check_data
#undef check_one
#undef main

#define main mpz_t_perfpow_main
#define check_rand mpz_t_perfpow_check_rand
#define check_random mpz_t_perfpow_check_random
#include "tests/mpz/t-perfpow.c"
#undef check_rand
#undef check_random
#undef main

#define main mpz_t_lucnum_ui_main
#include "tests/mpz/t-lucnum_ui.c"
#undef main

#define main mpz_reuse_main
#define ds_func mpz_reuse_ds_func
#include "tests/mpz/reuse.c"
#undef ds_func
#undef FAIL
#undef main

#define main mpz_dive_ui_main
#define check_rand mpz_dive_ui_check_rand
#define check_random mpz_dive_ui_check_random
#include "tests/mpz/dive_ui.c"
#undef check_rand
#undef check_random
#undef main

#define main mpz_t_cdiv_ui_main
#define debug_mp mpz_t_cdiv_ui_debug_mp
#define dump_abort mpz_t_cdiv_ui_dump_abort
#include "tests/mpz/t-cdiv_ui.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_fits_main
#include "tests/mpz/t-fits.c"
#undef EXPECT_S
#undef main

#define main mpz_t_popcount_main
#define check_data mpz_t_popcount_check_data
#define check_one mpz_t_popcount_check_one
#define check_onebit mpz_t_popcount_check_onebit
#define check_rand mpz_t_popcount_check_rand
#define check_random mpz_t_popcount_check_random
#include "tests/mpz/t-popcount.c"
#undef check_data
#undef check_one
#undef check_onebit
#undef check_rand
#undef check_random
#undef main

#define main mpz_t_powm_main
#define debug_mp mpz_t_powm_debug_mp
#include "tests/mpz/t-powm.c"
#undef debug_mp
#undef SIZEM
#undef main

#define main mpz_t_set_d_main
#define check_data mpz_t_set_d_check_data
#include "tests/mpz/t-set_d.c"
#undef check_data
#undef main

#define main mpz_t_cong_main
#define check_data mpz_t_cong_check_data
#define check_one mpz_t_cong_check_one
#define check_rand mpz_t_cong_check_rand
#define check_random mpz_t_cong_check_random
#include "tests/mpz/t-cong.c"
#undef check_data
#undef check_one
#undef check_rand
#undef check_random
#undef main

#define main mpz_convert_main
#define debug_mp mpz_convert_debug_mp
#include "tests/mpz/convert.c"
#undef debug_mp
#undef main

#define main mpz_t_aorsmul_main
#define check_data mpz_t_aorsmul_check_data
#define check_one mpz_t_aorsmul_check_one
#define check_rand mpz_t_aorsmul_check_rand
#define check_random mpz_t_aorsmul_check_random
#include "tests/mpz/t-aorsmul.c"
#undef check_data
#undef check_one
#undef check_rand
#undef check_random
#undef M
#undef main

#define main mpz_t_mfac_uiui_main
#include "tests/mpz/t-mfac_uiui.c"
#undef main

#define main mpz_t_mul_main
#define debug_mp mpz_t_mul_debug_mp
#define dump_abort mpz_t_mul_dump_abort
#include "tests/mpz/t-mul.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_cong_2exp_main
#define check_data mpz_t_cong_2exp_check_data
#define check_one mpz_t_cong_2exp_check_one
#define check_rand mpz_t_cong_2exp_check_rand
#define check_random mpz_t_cong_2exp_check_random
#include "tests/mpz/t-cong_2exp.c"
#undef check_data
#undef check_one
#undef check_rand
#undef check_random
#undef main

#define main mpz_t_pprime_p_main
#define check_one mpz_t_pprime_p_check_one
#define isprime mpz_t_pprime_p_isprime
#define check_primes mpz_t_pprime_p_check_primes
#include "tests/mpz/t-pprime_p.c"
#undef check_one
#undef isprime
#undef check_primes
#undef main

#define main mpz_t_export_main
#define check_data mpz_t_export_check_data
#include "tests/mpz/t-export.c"
#undef check_data
#undef main

#define main mpz_t_import_main
#define check_data mpz_t_import_check_data
#include "tests/mpz/t-import.c"
#undef check_data
#undef main

#define main mpz_t_set_si_main
#define check_data mpz_t_set_si_check_data
#include "tests/mpz/t-set_si.c"
#undef check_data
#undef main

#define main mpz_t_cmp_si_main
#define check_data mpz_t_cmp_si_check_data
#include "tests/mpz/t-cmp_si.c"
#undef check_data
#undef SGN
#undef main

#define main mpz_t_root_main
#define check_one mpz_t_root_check_one
#define debug_mp mpz_t_root_debug_mp
#include "tests/mpz/t-root.c"
#undef check_one
#undef debug_mp
#undef main

#define main mpz_t_fdiv_main
#define debug_mp mpz_t_fdiv_debug_mp
#define dump_abort mpz_t_fdiv_dump_abort
#include "tests/mpz/t-fdiv.c"
#undef debug_mp
#undef dump_abort
#undef main

#define main mpz_t_cmp_main
#define check_one mpz_t_cmp_check_one
#define check_various mpz_t_cmp_check_various
#include "tests/mpz/t-cmp.c"
#undef check_one
#undef check_various
#undef SET4
#undef main

#define main mpz_t_limbs_main
#include "tests/mpz/t-limbs.c"
#undef COUNT
#undef main

#define main mpz_t_perfsqr_main
#define sq_res_0x100 mpz_t_perfsqr_sq_res_0x100
#include "tests/mpz/t-perfsqr.c"
#undef sq_res_0x100
#undef main

#define main mpz_t_gcd_ui_main
#include "tests/mpz/t-gcd_ui.c"
#undef main

#define main mpz_t_set_str_main
#define check_one mpz_t_set_str_check_one
#define check_samples mpz_t_set_str_check_samples
#include "tests/mpz/t-set_str.c"
#undef check_one
#undef check_samples
#undef main

#define main mpz_t_sizeinbase_main
#include "tests/mpz/t-sizeinbase.c"
#undef main

#define main mpz_t_div_2exp_main
#define check_one mpz_t_div_2exp_check_one
#define check_rand mpz_t_div_2exp_check_rand
#define check_random mpz_t_div_2exp_check_random
#define check_various mpz_t_div_2exp_check_various
#include "tests/mpz/t-div_2exp.c"
#undef check_one
#undef check_rand
#undef check_random
#undef check_various
#undef main

#define main mpz_t_remove_main
#define debug_mp mpz_t_remove_debug_mp
#include "tests/mpz/t-remove.c"
#undef debug_mp
#undef main

#define main mpz_t_bin_main
#include "tests/mpz/t-bin.c"
#undef COUNT
#undef main

#define main mpz_t_get_d_2exp_main
#define check_one mpz_t_get_d_2exp_check_one
#define check_onebit mpz_t_get_d_2exp_check_onebit
#define check_round mpz_t_get_d_2exp_check_round
#define check_rand mpz_t_get_d_2exp_check_rand
#include "tests/mpz/t-get_d_2exp.c"
#undef check_one
#undef check_onebit
#undef check_round
#undef check_rand
#undef main

#define main mpz_t_hamdist_main
#define check_rand mpz_t_hamdist_check_rand
#define check_twobits mpz_t_hamdist_check_twobits
#include "tests/mpz/t-hamdist.c"
#undef check_rand
#undef check_twobits
#undef main

#define main mpz_t_cmp_d_main
#define check_data mpz_t_cmp_d_check_data
#define check_one mpz_t_cmp_d_check_one
#define check_onebit mpz_t_cmp_d_check_onebit
#include "tests/mpz/t-cmp_d.c"
#undef check_data
#undef check_one
#undef check_onebit
#undef SGN
#undef main

void mpz_tests(int argc, char** argv) {
std::cout << "testing t-set_f.c...\n";
mpz_t_set_f_main(argc, argv);
std::cout << "testing t-pow.c...\n";
mpz_t_pow_main(argc, argv);
std::cout << "testing t-addsub.c...\n";
mpz_t_addsub_main(argc, argv);
std::cout << "testing t-mul_i.c...\n";
mpz_t_mul_i_main(argc, argv);
std::cout << "testing dive.c...\n";
mpz_dive_main(argc, argv);
std::cout << "testing t-scan.c...\n";
mpz_t_scan_main(argc, argv);
std::cout << "testing t-fib_ui.c...\n";
mpz_t_fib_ui_main(argc, argv);
std::cout << "testing t-powm_ui.c...\n";
mpz_t_powm_ui_main(argc, argv);
std::cout << "testing t-get_d.c...\n";
mpz_t_get_d_main();
std::cout << "testing t-tdiv_ui.c...\n";
mpz_t_tdiv_ui_main(argc, argv);
std::cout << "testing t-gcd.c...\n";
mpz_t_gcd_main(argc, argv);
std::cout << "testing t-bit.c...\n";
mpz_t_bit_main(argc, argv);
std::cout << "testing t-io_raw.c...\n";
mpz_t_io_raw_main();
std::cout << "testing t-oddeven.c...\n";
mpz_t_oddeven_main();
std::cout << "testing logic.c...\n";
mpz_logic_main(argc, argv);
std::cout << "testing t-lucm.c...\n";
mpz_t_lucm_main(argc, argv);
std::cout << "testing t-lcm.c...\n";
mpz_t_lcm_main(argc, argv);
std::cout << "testing io.c...\n";
mpz_io_main(argc, argv);
std::cout << "testing t-jac.c...\n";
mpz_t_jac_main(argc, argv);
std::cout << "testing t-fdiv_ui.c...\n";
mpz_t_fdiv_ui_main(argc, argv);
std::cout << "testing t-inp_str.c...\n";
mpz_t_inp_str_main();
std::cout << "testing t-get_si.c...\n";
mpz_t_get_si_main();
std::cout << "testing t-sqrtrem.c...\n";
mpz_t_sqrtrem_main(argc, argv);
std::cout << "testing t-divis.c...\n";
mpz_t_divis_main(argc, argv);
std::cout << "testing t-invert.c...\n";
mpz_t_invert_main(argc, argv);
std::cout << "testing t-tdiv.c...\n";
mpz_t_tdiv_main(argc, argv);
std::cout << "testing t-nextprime.c...\n";
mpz_t_nextprime_main(argc, argv);
std::cout << "testing t-fac_ui.c...\n";
mpz_t_fac_ui_main(argc, argv);
std::cout << "testing t-primorial_ui.c...\n";
mpz_t_primorial_ui_main(argc, argv);
std::cout << "testing t-divis_2exp.c...\n";
mpz_t_divis_2exp_main(argc, argv);
std::cout << "testing t-perfpow.c...\n";
mpz_t_perfpow_main(argc, argv);
std::cout << "testing t-lucnum_ui.c...\n";
mpz_t_lucnum_ui_main(argc, argv);
std::cout << "testing reuse.c...\n";
mpz_reuse_main(argc, argv);
std::cout << "testing dive_ui.c...\n";
mpz_dive_ui_main(argc, argv);
std::cout << "testing t-cdiv_ui.c...\n";
mpz_t_cdiv_ui_main(argc, argv);
std::cout << "testing t-fits.c...\n";
mpz_t_fits_main();
std::cout << "testing t-popcount.c...\n";
mpz_t_popcount_main();
std::cout << "testing t-powm.c...\n";
mpz_t_powm_main(argc, argv);
std::cout << "testing t-set_d.c...\n";
mpz_t_set_d_main();
std::cout << "testing t-cong.c...\n";
mpz_t_cong_main(argc, argv);
std::cout << "testing convert.c...\n";
mpz_convert_main(argc, argv);
std::cout << "testing t-aorsmul.c...\n";
mpz_t_aorsmul_main(argc, argv);
std::cout << "testing t-mfac_uiui.c...\n";
mpz_t_mfac_uiui_main(argc, argv);
std::cout << "testing t-mul.c...\n";
mpz_t_mul_main(argc, argv);
std::cout << "testing t-cong_2exp.c...\n";
mpz_t_cong_2exp_main(argc, argv);
std::cout << "testing t-pprime_p.c...\n";
mpz_t_pprime_p_main(argc, argv);
std::cout << "testing t-export.c...\n";
mpz_t_export_main();
std::cout << "testing t-import.c...\n";
mpz_t_import_main();
std::cout << "testing t-set_si.c...\n";
mpz_t_set_si_main();
std::cout << "testing t-cmp_si.c...\n";
mpz_t_cmp_si_main();
std::cout << "testing t-root.c...\n";
mpz_t_root_main(argc, argv);
std::cout << "testing t-fdiv.c...\n";
mpz_t_fdiv_main(argc, argv);
std::cout << "testing t-cmp.c...\n";
mpz_t_cmp_main();
std::cout << "testing t-limbs.c...\n";
mpz_t_limbs_main(argc, argv);
std::cout << "testing t-perfsqr.c...\n";
mpz_t_perfsqr_main(argc, argv);
std::cout << "testing t-gcd_ui.c...\n";
mpz_t_gcd_ui_main();
std::cout << "testing t-set_str.c...\n";
mpz_t_set_str_main();
std::cout << "testing t-sizeinbase.c...\n";
mpz_t_sizeinbase_main();
std::cout << "testing t-div_2exp.c...\n";
mpz_t_div_2exp_main(argc, argv);
std::cout << "testing t-remove.c...\n";
mpz_t_remove_main(argc, argv);
std::cout << "testing t-bin.c...\n";
mpz_t_bin_main(argc, argv);
std::cout << "testing t-get_d_2exp.c...\n";
mpz_t_get_d_2exp_main();
std::cout << "testing t-hamdist.c...\n";
mpz_t_hamdist_main();
std::cout << "testing t-cmp_d.c...\n";
mpz_t_cmp_d_main(argc, argv);
}
