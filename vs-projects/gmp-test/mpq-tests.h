#define main mpq_t_inv_main
#include "tests/mpq/t-inv.c"
#undef main

#define main mpq_t_equal_main
#define check_one mpq_t_equal_check_one
#include "tests/mpq/t-equal.c"
#undef check_one
#undef SET4
#undef main

#define main mpq_t_inp_str_main
#define check_data mpq_t_inp_str_check_data
#include "tests/mpq/t-inp_str.c"
#undef check_data
#undef FILENAME
#undef main

#define main mpq_t_set_f_main
#include "tests/mpq/t-set_f.c"
#undef main

#define main mpq_t_get_d_main
#define check_one mpq_t_get_d_check_one
#define check_onebit mpq_t_get_d_check_onebit
#define dump mpq_t_get_d_dump
#define check_rand mpq_t_get_d_check_rand
#include "tests/mpq/t-get_d.c"
#undef check_one
#undef check_onebit
#undef dump
#undef check_rand
#undef main

#define main mpq_t_aors_main
#define check_data mpq_t_aors_check_data
#define check_rand mpq_t_aors_check_rand
#include "tests/mpq/t-aors.c"
#undef check_data
#undef check_rand
#undef main

#define main mpq_t_cmp_main
#include "tests/mpq/t-cmp.c"
#undef SGN
#undef main

#define main mpq_reuse_main
#define dump mpq_reuse_dump
#define dss_func mpq_reuse_dss_func
#define dss_funcs mpq_reuse_dss_funcs
#define dsi_func mpq_reuse_dsi_func
#define dsi_funcs mpq_reuse_dsi_funcs
#define dss_func_names mpq_reuse_dss_func_names
#define dsi_func_names mpq_reuse_dsi_func_names
#include "tests/mpq/reuse.c"
#undef dump
#undef dss_func
#undef dss_funcs
#undef dsi_func
#undef dsi_funcs
#undef dss_func_names
#undef dsi_func_names
#undef main

#define main mpq_t_cmp_z_main
#include "tests/mpq/t-cmp_z.c"
#undef SGN
#undef main

#define main mpq_t_cmp_si_main
#define check_data mpq_t_cmp_si_check_data
#include "tests/mpq/t-cmp_si.c"
#undef check_data
#undef SGN
#undef main

#define main mpq_t_md_2exp_main
#define check_rand mpq_t_md_2exp_check_rand
#include "tests/mpq/t-md_2exp.c"
#undef check_rand
#undef main

#define main mpq_t_cmp_ui_main
#include "tests/mpq/t-cmp_ui.c"
#undef SGN
#undef main

#define main mpq_t_set_str_main
#define check_one mpq_t_set_str_check_one
#include "tests/mpq/t-set_str.c"
#undef check_one
#undef main

#define main mpq_io_main
#include "tests/mpq/io.c"
#undef FILENAME
#undef main

#define main mpq_t_get_str_main
#define check_data mpq_t_get_str_check_data
#define check_one mpq_t_get_str_check_one
#include "tests/mpq/t-get_str.c"
#undef check_data
#undef check_one
#undef main

void mpq_tests(int argc, char** argv) {
std::cout << "testing t-inv.c...\n";
mpq_t_inv_main(argc, argv);
std::cout << "testing t-equal.c...\n";
mpq_t_equal_main();
std::cout << "testing t-inp_str.c...\n";
mpq_t_inp_str_main();
std::cout << "testing t-set_f.c...\n";
mpq_t_set_f_main(argc, argv);
std::cout << "testing t-get_d.c...\n";
mpq_t_get_d_main(argc, argv);
std::cout << "testing t-aors.c...\n";
mpq_t_aors_main();
std::cout << "testing t-cmp.c...\n";
mpq_t_cmp_main(argc, argv);
std::cout << "testing reuse.c...\n";
mpq_reuse_main(argc, argv);
std::cout << "testing t-cmp_z.c...\n";
mpq_t_cmp_z_main(argc, argv);
std::cout << "testing t-cmp_si.c...\n";
mpq_t_cmp_si_main(argc, argv);
std::cout << "testing t-md_2exp.c...\n";
mpq_t_md_2exp_main(argc, argv);
std::cout << "testing t-cmp_ui.c...\n";
mpq_t_cmp_ui_main(argc, argv);
std::cout << "testing t-set_str.c...\n";
mpq_t_set_str_main();
std::cout << "testing io.c...\n";
mpq_io_main(argc, argv);
std::cout << "testing t-get_str.c...\n";
mpq_t_get_str_main();
}
