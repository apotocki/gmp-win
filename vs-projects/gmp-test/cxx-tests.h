#define main cxx_t_unary_main
#define check_mpq cxx_t_unary_check_mpq
#define check_mpz cxx_t_unary_check_mpz
#define check_mpf cxx_t_unary_check_mpf
#include "tests/cxx/t-unary.cc"
#undef check_mpq
#undef check_mpz
#undef check_mpf
#undef main

#define main cxx_t_assign_main
#define check_mpq cxx_t_assign_check_mpq
#define check_mpz cxx_t_assign_check_mpz
#define check_mpf cxx_t_assign_check_mpf
#include "tests/cxx/t-assign.cc"
#undef check_mpq
#undef check_mpz
#undef check_mpf
#undef main

#define main cxx_t_ostream_main
#define option_check_standard cxx_t_ostream_option_check_standard
#define check_mpz cxx_t_ostream_check_mpz
#define check_mpq cxx_t_ostream_check_mpq
#define check_mpf cxx_t_ostream_check_mpf
#include "tests/cxx/t-ostream.cc"
#undef option_check_standard
#undef check_mpz
#undef check_mpq
#undef check_mpf
#undef CALL
#undef DUMP
#undef ABORT
#undef main

#define main cxx_t_headers_main
#include "tests/cxx/t-headers.cc"
#undef main

#define main cxx_t_cast_main
#include "tests/cxx/t-cast.cc"
#undef main

#define main cxx_t_misc_main
#define check_mpz cxx_t_misc_check_mpz
#define check_mpq cxx_t_misc_check_mpq
#define check_mpf cxx_t_misc_check_mpf
#define check_limits cxx_t_misc_check_limits
#include "tests/cxx/t-misc.cc"
#undef check_mpz
#undef check_mpq
#undef check_mpf
#undef check_limits
#undef main

#define main cxx_t_iostream_main
#include "tests/cxx/t-iostream.cc"
#undef main

#define main cxx_t_ternary_main
#define check_mpq cxx_t_ternary_check_mpq
#define check_mpf cxx_t_ternary_check_mpf
#include "tests/cxx/t-ternary.cc"
#undef check_mpq
#undef check_mpf
#undef main

#define main cxx_t_mix_main
#define check cxx_t_mix_check
#include "tests/cxx/t-mix.cc"
#undef check
#undef main

#define main cxx_t_binary_main
#define check_mpq cxx_t_binary_check_mpq
#define check_mpf cxx_t_binary_check_mpf
#include "tests/cxx/t-binary.cc"
#undef check_mpq
#undef check_mpf
#undef main

#define main cxx_t_rand_main
#define check_mpz cxx_t_rand_check_mpz
#define check_mpf cxx_t_rand_check_mpf
#include "tests/cxx/t-rand.cc"
#undef check_mpz
#undef check_mpf
#undef main

#define main cxx_t_prec_main
#define check_mpf cxx_t_prec_check_mpf
#include "tests/cxx/t-prec.cc"
#undef check_mpf
#undef main

#define main cxx_t_ops3_main
#define check cxx_t_ops3_check
#include "tests/cxx/t-ops3.cc"
#undef check
#undef main

#define main cxx_t_ops2f_main
#include "tests/cxx/t-ops2f.cc"
#undef main

#define main cxx_t_ops2qf_main
#include "tests/cxx/t-ops2qf.cc"
#undef main

#define main cxx_t_ops_main
#define check cxx_t_ops_check
#define check_mpq cxx_t_ops_check_mpq
#define check_mpz cxx_t_ops_check_mpz
#define check_mpf cxx_t_ops_check_mpf
#include "tests/cxx/t-ops.cc"
#undef check
#undef check_mpq
#undef check_mpz
#undef check_mpf
#undef main

#define main cxx_t_istream_main
#define option_check_standard cxx_t_istream_option_check_standard
#define check_mpz cxx_t_istream_check_mpz
#define check_mpq cxx_t_istream_check_mpq
#define check_mpf cxx_t_istream_check_mpf
#include "tests/cxx/t-istream.cc"
#undef option_check_standard
#undef check_mpz
#undef check_mpq
#undef check_mpf
#undef main

#define main cxx_t_cxx11_main
#include "tests/cxx/t-cxx11.cc"
#undef main

#define main cxx_t_ops2z_main
#include "tests/cxx/t-ops2z.cc"
#undef main

#define main cxx_t_locale_main
#include "tests/cxx/t-locale.cc"
#undef main

#define main cxx_t_constr_main
#define check_mpq cxx_t_constr_check_mpq
#define check_mpz cxx_t_constr_check_mpz
#define check_mpf cxx_t_constr_check_mpf
#include "tests/cxx/t-constr.cc"
#undef check_mpq
#undef check_mpz
#undef check_mpf
#undef main

void cxx_tests(int argc, char** argv) {
std::cout << "testing t-unary.cc...\n";
cxx_t_unary_main();
std::cout << "testing t-assign.cc...\n";
cxx_t_assign_main();
std::cout << "testing t-ostream.cc...\n";
cxx_t_ostream_main(argc, argv);
std::cout << "testing t-headers.cc...\n";
cxx_t_headers_main();
std::cout << "testing t-cast.cc...\n";
cxx_t_cast_main();
std::cout << "testing t-misc.cc...\n";
cxx_t_misc_main();
std::cout << "testing t-iostream.cc...\n";
cxx_t_iostream_main(argc, argv);
std::cout << "testing t-ternary.cc...\n";
cxx_t_ternary_main();
std::cout << "testing t-mix.cc...\n";
cxx_t_mix_main();
std::cout << "testing t-binary.cc...\n";
cxx_t_binary_main();
std::cout << "testing t-rand.cc...\n";
cxx_t_rand_main();
std::cout << "testing t-prec.cc...\n";
cxx_t_prec_main();
std::cout << "testing t-ops3.cc...\n";
cxx_t_ops3_main();
std::cout << "testing t-ops2f.cc...\n";
cxx_t_ops2f_main();
std::cout << "testing t-ops2qf.cc...\n";
cxx_t_ops2qf_main();
std::cout << "testing t-ops.cc...\n";
cxx_t_ops_main();
std::cout << "testing t-istream.cc...\n";
cxx_t_istream_main(argc, argv);
std::cout << "testing t-cxx11.cc...\n";
cxx_t_cxx11_main();
std::cout << "testing t-ops2z.cc...\n";
cxx_t_ops2z_main();
std::cout << "testing t-locale.cc...\n";
cxx_t_locale_main();
std::cout << "testing t-constr.cc...\n";
cxx_t_constr_main();
}
