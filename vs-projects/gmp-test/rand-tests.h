#define main rand_t_urmui_main
#define check_one rand_t_urmui_check_one
#include "tests/rand/t-urmui.c"
#undef check_one
#undef main

#define main rand_t_urndmm_main
#include "tests/rand/t-urndmm.c"
#undef main

#define main rand_t_mt_main
#include "tests/rand/t-mt.c"
#undef main

#define main rand_t_iset_main
#define check_one rand_t_iset_check_one
#include "tests/rand/t-iset.c"
#undef check_one
#undef main

#define main rand_t_urbui_main
#define check_one rand_t_urbui_check_one
#include "tests/rand/t-urbui.c"
#undef check_one
#undef main

#define main rand_t_lc2exp_main
#include "tests/rand/t-lc2exp.c"
#undef main

#define main rand_t_rand_main
#include "tests/rand/t-rand.c"
#undef main

void rand_tests(int argc, char** argv) {
std::cout << "testing t-urmui.c...\n";
rand_t_urmui_main(argc, argv);
std::cout << "testing t-urndmm.c...\n";
rand_t_urndmm_main(argc, argv);
std::cout << "testing t-mt.c...\n";
rand_t_mt_main(argc, argv);
std::cout << "testing t-iset.c...\n";
rand_t_iset_main(argc, argv);
std::cout << "testing t-urbui.c...\n";
rand_t_urbui_main(argc, argv);
std::cout << "testing t-lc2exp.c...\n";
rand_t_lc2exp_main();
std::cout << "testing t-rand.c...\n";
rand_t_rand_main(argc, argv);
}
