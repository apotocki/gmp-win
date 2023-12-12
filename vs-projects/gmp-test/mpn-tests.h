#define main mpn_t_mulmod_bknp1_main
#define supported_k mpn_t_mulmod_bknp1_supported_k
#include "tests/mpn/t-mulmod_bknp1.c"
#undef supported_k
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef MAX_K
#undef main

#define main mpn_t_div_main
#define dumpy mpn_t_div_dumpy
#define test mpn_t_div_test
#include "tests/mpn/t-div.c"
#undef dumpy
#undef test
#undef SIZE_LOG
#undef COUNT
#undef main

#define main mpn_logic_main
#include "tests/mpn/logic.c"
#undef main

#define main mpn_t_scan_main
#define check mpn_t_scan_check
#include "tests/mpn/t-scan.c"
#undef check
#undef SIZE
#undef main

#define main mpn_t_toom43_main
#include "tests/mpn/t-toom43.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_sizeinbase_main
#include "tests/mpn/t-sizeinbase.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef main

#define main mpn_t_toom32_main
#include "tests/mpn/t-toom32.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_instrument_main
#include "tests/mpn/t-instrument.c"
#undef main

#define main mpn_t_toom4_sqr_main
#include "tests/mpn/t-toom4-sqr.c"
#undef COUNT
#undef mpn_toomN_sqr
#undef mpn_toomN_sqr_itch
#undef MIN_AN
#undef MAX_AN
#undef main

#define main mpn_t_divrem_1_main
#include "tests/mpn/t-divrem_1.c"
#undef main

#define main mpn_t_toom22_main
#include "tests/mpn/t-toom22.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_toom42_main
#include "tests/mpn/t-toom42.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_iord_u_main
#include "tests/mpn/t-iord_u.c"
#undef M
#undef SIZE
#undef main

#define main mpn_t_toom33_main
#include "tests/mpn/t-toom33.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_mulmid_main
#include "tests/mpn/t-mulmid.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef main

#define main mpn_t_toom54_main
#include "tests/mpn/t-toom54.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_toom44_main
#include "tests/mpn/t-toom44.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_toom62_main
#include "tests/mpn/t-toom62.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_sqrmod_bknp1_main
#define supported_k mpn_t_sqrmod_bknp1_supported_k
#include "tests/mpn/t-sqrmod_bknp1.c"
#undef supported_k
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef MAX_K
#undef main

#define main mpn_t_toom8h_main
#include "tests/mpn/t-toom8h.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_gcd_11_main
#include "tests/mpn/t-gcd_11.c"
#undef COUNT
#undef main

#define main mpn_t_minvert_main
#include "tests/mpn/t-minvert.c"
#undef COUNT
#undef MAX_SIZE
#undef main

#define main mpn_t_sqrlo_main
#include "tests/mpn/t-sqrlo.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef main

#define main mpn_t_hgcd_appr_main
#define hgcd_ref mpn_t_hgcd_appr_hgcd_ref
#define debug_mp mpn_t_hgcd_appr_debug_mp
#define one_test mpn_t_hgcd_appr_one_test
#define sdiv_qr mpn_t_hgcd_appr_sdiv_qr
#include "tests/mpn/t-hgcd_appr.c"
#undef hgcd_ref
#undef debug_mp
#undef one_test
#undef sdiv_qr
#undef main

#define main mpn_t_sqrmod_bnm1_main
#include "tests/mpn/t-sqrmod_bnm1.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef MAX_K
#undef main

#define main mpn_t_broot_main
#include "tests/mpn/t-broot.c"
#undef COUNT
#undef MAX_LIMBS
#undef main

#define main mpn_t_fib2m_main
#include "tests/mpn/t-fib2m.c"
#undef COUNT
#undef MAX_K
#undef main

#define main mpn_t_toom63_main
#include "tests/mpn/t-toom63.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_bdiv_main
#define dumpy mpn_t_bdiv_dumpy
#define test mpn_t_bdiv_test
#include "tests/mpn/t-bdiv.c"
#undef dumpy
#undef test
#undef COUNT
#undef main

#define main mpn_t_mp_bases_main
#include "tests/mpn/t-mp_bases.c"
#undef main

#define main mpn_t_asmtype_main
#include "tests/mpn/t-asmtype.c"
#undef main



#define main mpn_t_hgcd_main
#define hgcd_ref mpn_t_hgcd_hgcd_ref
#define debug_mp mpn_t_hgcd_debug_mp
#define one_test mpn_t_hgcd_one_test
#define sdiv_qr mpn_t_hgcd_sdiv_qr
#include "tests/mpn/t-hgcd.c"
#undef hgcd_ref
#undef debug_mp
#undef one_test
#undef sdiv_qr
#undef main

#define main mpn_t_mullo_main
#include "tests/mpn/t-mullo.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef main

#define main mpn_t_matrix22_main
#include "tests/mpn/t-matrix22.c"
#undef MAX_SIZE
#undef main

#define main mpn_t_addaddmul_main
#include "tests/mpn/t-addaddmul.c"
#undef main

#define main mpn_t_gcdext_1_main
#include "tests/mpn/t-gcdext_1.c"
#undef COUNT
#undef main

#define main mpn_t_invert_main
#include "tests/mpn/t-invert.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef main

#define main mpn_t_toom6h_main
#include "tests/mpn/t-toom6h.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_mulmod_bnm1_main
#include "tests/mpn/t-mulmod_bnm1.c"
#undef SIZE_LOG
#undef COUNT
#undef MAX_N
#undef MIN_N
#undef MAX_K
#undef main

#define main mpn_t_brootinv_main
#include "tests/mpn/t-brootinv.c"
#undef COUNT
#undef main

#define main mpn_t_mul_main
#include "tests/mpn/t-mul.c"
#undef main

#define main mpn_t_fat_main
#include "tests/mpn/t-fat.c"
#undef main

#define main mpn_t_toom8_sqr_main
#include "tests/mpn/t-toom8-sqr.c"
#undef COUNT
#undef mpn_toomN_sqr
#undef mpn_toomN_sqr_itch
#undef MIN_AN
#undef MAX_AN
#undef main

#define main mpn_t_mod_1_main
#include "tests/mpn/t-mod_1.c"
#undef main

#define main mpn_t_toom6_sqr_main
#include "tests/mpn/t-toom6-sqr.c"
#undef COUNT
#undef mpn_toomN_sqr
#undef mpn_toomN_sqr_itch
#undef MIN_AN
#undef MAX_AN
#undef main

#define main mpn_t_toom3_sqr_main
#include "tests/mpn/t-toom3-sqr.c"
#undef COUNT
#undef mpn_toomN_sqr
#undef mpn_toomN_sqr_itch
#undef MIN_AN
#undef MAX_AN
#undef main

#define main mpn_t_toom2_sqr_main
#include "tests/mpn/t-toom2-sqr.c"
#undef COUNT
#undef mpn_toomN_sqr
#undef mpn_toomN_sqr_itch
#undef MIN_AN
#undef MAX_AN
#undef main

#define main mpn_t_toom52_main
#include "tests/mpn/t-toom52.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_aors_1_main
#include "tests/mpn/t-aors_1.c"
#undef M
#undef main

#define main mpn_t_get_d_main
#define check_rand mpn_t_get_d_check_rand
#define check_onebit mpn_t_get_d_check_onebit
#include "tests/mpn/t-get_d.c"
#undef check_rand
#undef check_onebit
#undef main

#define main mpn_t_gcd_22_main
#include "tests/mpn/t-gcd_22.c"
#undef COUNT
#undef main

#define main mpn_t_toom53_main
#include "tests/mpn/t-toom53.c"
#undef SIZE_LOG
#undef COUNT
#undef mpn_toomMN_mul
#undef mpn_toomMN_mul_itch
#undef MIN_AN
#undef MIN_BN
#undef MAX_AN
#undef MAX_BN
#undef main

#define main mpn_t_perfsqr_main
#include "tests/mpn/t-perfsqr.c"
#undef main

void mpn_tests(int argc, char** argv) {
std::cout << "testing t-div.c...\n";
mpn_t_div_main(argc, argv);
std::cout << "testing logic.c...\n";
mpn_logic_main(argc, argv);
std::cout << "testing t-scan.c...\n";
mpn_t_scan_main();
std::cout << "testing t-toom43.c...\n";
mpn_t_toom43_main(argc, argv);
std::cout << "testing t-sizeinbase.c...\n";
mpn_t_sizeinbase_main(argc, argv);
std::cout << "testing t-toom32.c...\n";
mpn_t_toom32_main(argc, argv);
std::cout << "testing t-instrument.c...\n";
mpn_t_instrument_main();
std::cout << "testing t-toom4-sqr.c...\n";
mpn_t_toom4_sqr_main(argc, argv);
std::cout << "testing t-divrem_1.c...\n";
mpn_t_divrem_1_main();
std::cout << "testing t-toom22.c...\n";
mpn_t_toom22_main(argc, argv);
std::cout << "testing t-toom42.c...\n";
mpn_t_toom42_main(argc, argv);
std::cout << "testing t-iord_u.c...\n";
mpn_t_iord_u_main();
std::cout << "testing t-toom33.c...\n";
mpn_t_toom33_main(argc, argv);
std::cout << "testing t-mulmid.c...\n";
mpn_t_mulmid_main(argc, argv);
std::cout << "testing t-toom54.c...\n";
mpn_t_toom54_main(argc, argv);
std::cout << "testing t-toom44.c...\n";
mpn_t_toom44_main(argc, argv);
std::cout << "testing t-toom62.c...\n";
mpn_t_toom62_main(argc, argv);
std::cout << "testing t-sqrmod_bknp1.c...\n";
mpn_t_sqrmod_bknp1_main(argc, argv);
std::cout << "testing t-toom8h.c...\n";
mpn_t_toom8h_main(argc, argv);
std::cout << "testing t-gcd_11.c...\n";
mpn_t_gcd_11_main(argc, argv);
std::cout << "testing t-minvert.c...\n";
mpn_t_minvert_main(argc, argv);
std::cout << "testing t-sqrlo.c...\n";
mpn_t_sqrlo_main(argc, argv);
std::cout << "testing t-hgcd_appr.c...\n";
mpn_t_hgcd_appr_main(argc, argv);
std::cout << "testing t-sqrmod_bnm1.c...\n";
mpn_t_sqrmod_bnm1_main(argc, argv);
std::cout << "testing t-broot.c...\n";
mpn_t_broot_main(argc, argv);
std::cout << "testing t-fib2m.c...\n";
mpn_t_fib2m_main(argc, argv);
std::cout << "testing t-toom63.c...\n";
mpn_t_toom63_main(argc, argv);
std::cout << "testing t-bdiv.c...\n";
mpn_t_bdiv_main(argc, argv);
std::cout << "testing t-mp_bases.c...\n";
mpn_t_mp_bases_main(argc, argv);
std::cout << "testing t-asmtype.c...\n";
mpn_t_asmtype_main();
std::cout << "testing t-mulmod_bknp1.c...\n";
mpn_t_mulmod_bknp1_main(argc, argv);
std::cout << "testing t-hgcd.c...\n";
mpn_t_hgcd_main(argc, argv);
std::cout << "testing t-mullo.c...\n";
mpn_t_mullo_main(argc, argv);
std::cout << "testing t-matrix22.c...\n";
mpn_t_matrix22_main(argc, argv);
std::cout << "testing t-addaddmul.c...\n";
mpn_t_addaddmul_main(argc, argv);
std::cout << "testing t-gcdext_1.c...\n";
mpn_t_gcdext_1_main(argc, argv);
std::cout << "testing t-invert.c...\n";
mpn_t_invert_main(argc, argv);
std::cout << "testing t-toom6h.c...\n";
mpn_t_toom6h_main(argc, argv);
std::cout << "testing t-mulmod_bnm1.c...\n";
mpn_t_mulmod_bnm1_main(argc, argv);
std::cout << "testing t-brootinv.c...\n";
mpn_t_brootinv_main(argc, argv);
std::cout << "testing t-mul.c...\n";
mpn_t_mul_main(argc, argv);
std::cout << "testing t-fat.c...\n";
mpn_t_fat_main();
std::cout << "testing t-toom8-sqr.c...\n";
mpn_t_toom8_sqr_main(argc, argv);
std::cout << "testing t-mod_1.c...\n";
mpn_t_mod_1_main(argc, argv);
std::cout << "testing t-toom6-sqr.c...\n";
mpn_t_toom6_sqr_main(argc, argv);
std::cout << "testing t-toom3-sqr.c...\n";
mpn_t_toom3_sqr_main(argc, argv);
std::cout << "testing t-toom2-sqr.c...\n";
mpn_t_toom2_sqr_main(argc, argv);
std::cout << "testing t-toom52.c...\n";
mpn_t_toom52_main(argc, argv);
std::cout << "testing t-aors_1.c...\n";
mpn_t_aors_1_main();
std::cout << "testing t-get_d.c...\n";
mpn_t_get_d_main();
std::cout << "testing t-gcd_22.c...\n";
mpn_t_gcd_22_main(argc, argv);
std::cout << "testing t-toom53.c...\n";
mpn_t_toom53_main(argc, argv);
std::cout << "testing t-perfsqr.c...\n";
mpn_t_perfsqr_main();
}
