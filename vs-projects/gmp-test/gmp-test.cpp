// gmp-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <chrono>

#include "gmp-impl.h"

extern "C" {

int gettimeofday(struct timeval* tp, struct timezone* tzp) {
    namespace sc = std::chrono;
    sc::system_clock::duration d = sc::system_clock::now().time_since_epoch();
    sc::seconds s = sc::duration_cast<sc::seconds>(d);
    tp->tv_sec = s.count();
    tp->tv_usec = sc::duration_cast<sc::microseconds>(d - s).count();

    return 0;
}

}

#pragma warning(disable : 4715 4305 4804)
#define unlink _unlink
#define isatty(...) 0

void FTEST(int rval) {
    if (rval) exit(rval);
}

#define exit(v) if (v) ::exit(v)

#include "mpn-tests.h"
#include "cxx-tests.h"
#include "mpf-tests.h"
#include "mpq-tests.h"
#undef M
#include "mpz-tests.h"
#include "rand-tests.h"

void spinner(void) {}
extern "C" int devel_test_add_ssaaaa_main();
extern "C" int devel_test_sub_ddmmss_main();

int main(int argc, char** argv)
{
    mpn_tests(argc, argv);
    cxx_tests(argc, argv);
    mpf_tests(argc, argv);
    mpq_tests(argc, argv);
    mpz_tests(argc, argv);
    rand_tests(argc, argv);

    FTEST(devel_test_add_ssaaaa_main());
    FTEST(devel_test_sub_ddmmss_main());
    std::cout << "Testing is completed.\n";
}
