#define main mpf_t_trunc_main
#define check_various mpf_t_trunc_check_various
#include "tests/mpf/t-trunc.c"
#undef check_various
#undef main

#define main mpf_t_cmp_d_main
#define check_infinity mpf_t_cmp_d_check_infinity
#include "tests/mpf/t-cmp_d.c"
#undef check_infinity
#undef SGN
#undef main

#define main mpf_t_sub_main
#define check_data mpf_t_sub_check_data
#define check_rand mpf_t_sub_check_rand
#include "tests/mpf/t-sub.c"
#undef check_data
#undef check_rand
#undef main

#define main mpf_t_mul_ui_main
#define check_various mpf_t_mul_ui_check_various
#define check_rand mpf_t_mul_ui_check_rand
#include "tests/mpf/t-mul_ui.c"
#undef check_various
#undef check_rand
#undef main

#define main mpf_t_conv_main
#include "tests/mpf/t-conv.c"
#undef main

#define main mpf_t_cmp_si_main
#define check_data mpf_t_cmp_si_check_data
#include "tests/mpf/t-cmp_si.c"
#undef check_data
#undef SGN
#undef main

#define main mpf_t_get_d_main
#include "tests/mpf/t-get_d.c"
#undef main

#define main mpf_reuse_main
#define dss_func mpf_reuse_dss_func
#define dsi_func mpf_reuse_dsi_func
#include "tests/mpf/reuse.c"
#undef dss_func
#undef dsi_func
#undef main

#define main mpf_t_sqrt_ui_main
#define check_rand mpf_t_sqrt_ui_check_rand
#include "tests/mpf/t-sqrt_ui.c"
#undef check_rand
#undef main

#define main mpf_t_pow_ui_main
#define check_data mpf_t_pow_ui_check_data
#include "tests/mpf/t-pow_ui.c"
#undef check_data
#undef main

#define main mpf_t_set_si_main
#define check_data mpf_t_set_si_check_data
#include "tests/mpf/t-set_si.c"
#undef check_data
#undef main

#define main mpf_t_set_q_main
#define check_various mpf_t_set_q_check_various
#define check_rand mpf_t_set_q_check_rand
#include "tests/mpf/t-set_q.c"
#undef check_various
#undef check_rand
#undef main

#define main mpf_t_int_p_main
#include "tests/mpf/t-int_p.c"
#undef main

#define main mpf_t_eq_main
#define check_data mpf_t_eq_check_data
#define check_rand mpf_t_eq_check_rand
#define check_random mpf_t_eq_check_random
#include "tests/mpf/t-eq.c"
#undef check_data
#undef check_rand
#undef check_random
#undef main

#define main mpf_t_fits_main
#include "tests/mpf/t-fits.c"
#undef EXPECT_S
#undef main

#define main mpf_t_dm2exp_main
#include "tests/mpf/t-dm2exp.c"
#undef main

#define main mpf_t_get_d_2exp_main
#define check_data mpf_t_get_d_2exp_check_data
#define check_round mpf_t_get_d_2exp_check_round
#include "tests/mpf/t-get_d_2exp.c"
#undef check_data
#undef check_round
#undef main

#define main mpf_t_set_main
#define check_rand mpf_t_set_check_rand
#define check_random mpf_t_set_check_random
#include "tests/mpf/t-set.c"
#undef check_rand
#undef check_random
#undef main

#define main mpf_t_div_main
#define check_various mpf_t_div_check_various
#define check_rand mpf_t_div_check_rand
#include "tests/mpf/t-div.c"
#undef check_various
#undef check_rand
#undef main

#define main mpf_t_sqrt_main
#define check_rand mpf_t_sqrt_check_rand
#include "tests/mpf/t-sqrt.c"
#undef check_rand
#undef main

#define main mpf_t_ui_div_main
#define check_various mpf_t_ui_div_check_various
#define check_rand mpf_t_ui_div_check_rand
#include "tests/mpf/t-ui_div.c"
#undef check_various
#undef check_rand
#undef main

#define main mpf_t_get_si_main
#define check_data mpf_t_get_si_check_data
#define check_limbdata mpf_t_get_si_check_limbdata
#define check_max mpf_t_get_si_check_max
#include "tests/mpf/t-get_si.c"
#undef check_data
#undef check_limbdata
#undef check_max
#undef M
#undef CHECK_MAX
#undef main

#define main mpf_t_inp_str_main
#define check_data mpf_t_inp_str_check_data
#include "tests/mpf/t-inp_str.c"
#undef check_data
#undef FILENAME
#undef main

#define main mpf_t_set_ui_main
#define check_data mpf_t_set_ui_check_data
#include "tests/mpf/t-set_ui.c"
#undef check_data
#undef main

#define main mpf_t_get_ui_main
#define check_limbdata mpf_t_get_ui_check_limbdata
#include "tests/mpf/t-get_ui.c"
#undef check_limbdata
#undef main

#define main mpf_t_add_main
#include "tests/mpf/t-add.c"
#undef main

#define main mpf_t_gsprec_main
#include "tests/mpf/t-gsprec.c"
#undef main

#define main mpf_t_muldiv_main
#include "tests/mpf/t-muldiv.c"
#undef main

void mpf_tests(int argc, char** argv) {
std::cout << "testing t-trunc.c...\n";
mpf_t_trunc_main();
std::cout << "testing t-cmp_d.c...\n";
mpf_t_cmp_d_main(argc, argv);
std::cout << "testing t-sub.c...\n";
mpf_t_sub_main(argc, argv);
std::cout << "testing t-mul_ui.c...\n";
mpf_t_mul_ui_main();
std::cout << "testing t-conv.c...\n";
mpf_t_conv_main(argc, argv);
std::cout << "testing t-cmp_si.c...\n";
mpf_t_cmp_si_main();
std::cout << "testing t-get_d.c...\n";
mpf_t_get_d_main(argc, argv);
std::cout << "testing reuse.c...\n";
mpf_reuse_main();
std::cout << "testing t-sqrt_ui.c...\n";
mpf_t_sqrt_ui_main(argc, argv);
std::cout << "testing t-pow_ui.c...\n";
mpf_t_pow_ui_main(argc, argv);
std::cout << "testing t-set_si.c...\n";
mpf_t_set_si_main();
std::cout << "testing t-set_q.c...\n";
mpf_t_set_q_main();
std::cout << "testing t-int_p.c...\n";
mpf_t_int_p_main();
std::cout << "testing t-eq.c...\n";
mpf_t_eq_main(argc, argv);
std::cout << "testing t-fits.c...\n";
mpf_t_fits_main();
std::cout << "testing t-dm2exp.c...\n";
mpf_t_dm2exp_main(argc, argv);
std::cout << "testing t-get_d_2exp.c...\n";
mpf_t_get_d_2exp_main();
std::cout << "testing t-set.c...\n";
mpf_t_set_main(argc, argv);
std::cout << "testing t-div.c...\n";
mpf_t_div_main();
std::cout << "testing t-sqrt.c...\n";
mpf_t_sqrt_main(argc, argv);
std::cout << "testing t-ui_div.c...\n";
mpf_t_ui_div_main();
std::cout << "testing t-get_si.c...\n";
mpf_t_get_si_main();
std::cout << "testing t-inp_str.c...\n";
mpf_t_inp_str_main();
std::cout << "testing t-set_ui.c...\n";
mpf_t_set_ui_main();
std::cout << "testing t-get_ui.c...\n";
mpf_t_get_ui_main();
std::cout << "testing t-add.c...\n";
mpf_t_add_main(argc, argv);
std::cout << "testing t-gsprec.c...\n";
mpf_t_gsprec_main();
std::cout << "testing t-muldiv.c...\n";
mpf_t_muldiv_main(argc, argv);
}
