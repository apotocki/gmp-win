#pragma warning(disable : 4101)

#define OPERATION_sec_add_1 1
#include "mpn/generic/sec_aors_1.c"
#undef FNAME
#undef FNAME_itch
#undef OP_N
#undef OPERATION_sec_add_1

#define OPERATION_sec_sub_1 1
#include "mpn/generic/sec_aors_1.c"
#undef FNAME
#undef FNAME_itch
#undef OP_N
#undef OPERATION_sec_sub_1

#define OPERATION_sec_div_qr 1
#include "mpn/generic/sec_div.c"
#undef FNAME
#undef FNAME_itch
#undef Q
#undef RETTYPE
#undef OPERATION_sec_div_qr

#define OPERATION_sec_div_r 1
#include "mpn/generic/sec_div.c"
#undef FNAME
#undef FNAME_itch
#undef Q
#undef RETTYPE
#undef OPERATION_sec_div_r

#define OPERATION_sec_pi1_div_qr 1
#include "mpn/generic/sec_pi1_div.c"
#undef FNAME
#undef Q
#undef RETTYPE
#undef OPERATION_sec_pi1_div_qr

#define OPERATION_sec_pi1_div_r 1
#include "mpn/generic/sec_pi1_div.c"
#undef FNAME
#undef Q
#undef RETTYPE
#undef OPERATION_sec_pi1_div_r

#define OPERATION_hamdist 1
#include "mpn/generic/popham.c"
#undef FNAME
#undef POPHAM
#undef OPERATION_hamdist

#define OPERATION_popcount 1
#include "mpn/generic/popham.c"
#undef FNAME
#undef POPHAM
#undef OPERATION_popcount

#define OPERATION_and_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_and_n

#define OPERATION_andn_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_andn_n

#define OPERATION_nand_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_nand_n

#define OPERATION_ior_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_ior_n

#define OPERATION_iorn_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_iorn_n

#define OPERATION_nior_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_nior_n

#define OPERATION_xor_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_xor_n

#define OPERATION_xnor_n
#include "mpn/generic/logops_n.c"
#undef func
#undef call
#undef OPERATION_xnor_n
