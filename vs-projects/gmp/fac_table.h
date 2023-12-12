/* This file is automatically generated by gen-fac.c */

#if GMP_NUMB_BITS != 64
Error , error this data is for 64 GMP_NUMB_BITS only
#endif
/* This table is 0!,1!,2!,3!,...,n! where n! has <= GMP_NUMB_BITS bits */
#define ONE_LIMB_FACTORIAL_TABLE CNST_LIMB(0x1),CNST_LIMB(0x1),CNST_LIMB(0x2),CNST_LIMB(0x6),CNST_LIMB(0x18),CNST_LIMB(0x78),CNST_LIMB(0x2d0),CNST_LIMB(0x13b0),CNST_LIMB(0x9d80),CNST_LIMB(0x58980),CNST_LIMB(0x375f00),CNST_LIMB(0x2611500),CNST_LIMB(0x1c8cfc00),CNST_LIMB(0x17328cc00),CNST_LIMB(0x144c3b2800),CNST_LIMB(0x13077775800),CNST_LIMB(0x130777758000),CNST_LIMB(0x1437eeecd8000),CNST_LIMB(0x16beecca730000),CNST_LIMB(0x1b02b9306890000),CNST_LIMB(0x21c3677c82b40000)

/* This table is 0!,1!,2!/2,3!/2,...,n!/2^sn where n!/2^sn is an */
/* odd integer for each n, and n!/2^sn has <= GMP_NUMB_BITS bits */
#define ONE_LIMB_ODD_FACTORIAL_TABLE CNST_LIMB(0x1),CNST_LIMB(0x1),CNST_LIMB(0x1),CNST_LIMB(0x3),CNST_LIMB(0x3),CNST_LIMB(0xf),CNST_LIMB(0x2d),CNST_LIMB(0x13b),CNST_LIMB(0x13b),CNST_LIMB(0xb13),CNST_LIMB(0x375f),CNST_LIMB(0x26115),CNST_LIMB(0x7233f),CNST_LIMB(0x5cca33),CNST_LIMB(0x2898765),CNST_LIMB(0x260eeeeb),CNST_LIMB(0x260eeeeb),CNST_LIMB(0x286fddd9b),CNST_LIMB(0x16beecca73),CNST_LIMB(0x1b02b930689),CNST_LIMB(0x870d9df20ad),CNST_LIMB(0xb141df4dae31),CNST_LIMB(0x79dd498567c1b),CNST_LIMB(0xaf2e19afc5266d),CNST_LIMB(0x20d8a4d0f4f7347),CNST_LIMB(0x335281867ec241ef)
#define ODD_FACTORIAL_TABLE_MAX CNST_LIMB(0x335281867ec241ef)
#define ODD_FACTORIAL_TABLE_LIMIT (25)

/* Previous table, continued, values modulo 2^GMP_NUMB_BITS */
#define ONE_LIMB_ODD_FACTORIAL_EXTTABLE CNST_LIMB(0x9b3093d46fdd5923),CNST_LIMB(0x5e1f9767cc5866b1),CNST_LIMB(0x92dd23d6966aced7),CNST_LIMB(0xa30d0f4f0a196e5b),CNST_LIMB(0x8dc3e5a1977d7755),CNST_LIMB(0x2ab8ce915831734b),CNST_LIMB(0x2ab8ce915831734b),CNST_LIMB(0x81d2a0bc5e5fdcab),CNST_LIMB(0x9efcac82445da75b),CNST_LIMB(0xbc8b95cf58cde171),CNST_LIMB(0xa0e8444a1f3cecf9),CNST_LIMB(0x4191deb683ce3ffd),CNST_LIMB(0xddd3878bc84ebfc7),CNST_LIMB(0xcb39a64b83ff3751),CNST_LIMB(0xf8203f7993fc1495),CNST_LIMB(0xbd2a2a78b35f4bdd),CNST_LIMB(0x84757be6b6d13921),CNST_LIMB(0x3fbbcfc0b524988b),CNST_LIMB(0xbd11ed47c8928df9),CNST_LIMB(0x3c26b59e41c2f4c5),CNST_LIMB(0x677a5137e883fdb3),CNST_LIMB(0xff74e943b03b93dd),CNST_LIMB(0xfe5ebbcb10b2bb97),CNST_LIMB(0xb021f1de3235e7e7),CNST_LIMB(0x33509eb2e743a58f),CNST_LIMB(0x390f9da41279fb7d),CNST_LIMB(0xe5cb0154f031c559),CNST_LIMB(0x93074695ba4ddb6d),CNST_LIMB(0x81c471caa636247f),CNST_LIMB(0xe1347289b5a1d749),CNST_LIMB(0x286f21c3f76ce2ff),CNST_LIMB(0xbe84a2173e8ac7),CNST_LIMB(0x1595065ca215b88b),CNST_LIMB(0xf95877595b018809),CNST_LIMB(0x9c2efe3c5516f887),CNST_LIMB(0x373294604679382b),CNST_LIMB(0xaf1ff7a888adcd35),CNST_LIMB(0x18ddf279a2c5800b),CNST_LIMB(0x18ddf279a2c5800b),CNST_LIMB(0x505a90e2542582cb),CNST_LIMB(0x5bacad2cd8d5dc2b),CNST_LIMB(0xfe3152bcbff89f41)
#define ODD_FACTORIAL_EXTTABLE_LIMIT (67)

/* This table is 1!!,3!!,...,(2n+1)!! where (2n+1)!! has <= GMP_NUMB_BITS bits */
#define ONE_LIMB_ODD_DOUBLEFACTORIAL_TABLE CNST_LIMB(0x1),CNST_LIMB(0x3),CNST_LIMB(0xf),CNST_LIMB(0x69),CNST_LIMB(0x3b1),CNST_LIMB(0x289b),CNST_LIMB(0x20fdf),CNST_LIMB(0x1eee11),CNST_LIMB(0x20dcf21),CNST_LIMB(0x27065f73),CNST_LIMB(0x33385d46f),CNST_LIMB(0x49a10615f9),CNST_LIMB(0x730b9982551),CNST_LIMB(0xc223930bef8b),CNST_LIMB(0x15fe07a85a22bf),CNST_LIMB(0x2a9c2ed62ea3521),CNST_LIMB(0x57e22099c030d941)
#define ODD_DOUBLEFACTORIAL_TABLE_MAX CNST_LIMB(0x57e22099c030d941)
#define ODD_DOUBLEFACTORIAL_TABLE_LIMIT (33)

/* This table x_1, x_2,... contains values s.t. x_n^n has <= GMP_NUMB_BITS bits */
#define NTH_ROOT_NUMB_MASK_TABLE (GMP_NUMB_MASK),CNST_LIMB(0xffffffff),CNST_LIMB(0x285145),CNST_LIMB(0xffff),CNST_LIMB(0x1bdb),CNST_LIMB(0x659),CNST_LIMB(0x235),CNST_LIMB(0xff)

/* This table contains inverses of odd factorials, modulo 2^GMP_NUMB_BITS */

/* It begins with (2!/2)^-1=1 */
#define ONE_LIMB_ODD_FACTORIAL_INVERSES_TABLE CNST_LIMB(0x1),CNST_LIMB(0xaaaaaaaaaaaaaaab),CNST_LIMB(0xaaaaaaaaaaaaaaab),CNST_LIMB(0xeeeeeeeeeeeeeeef),CNST_LIMB(0x4fa4fa4fa4fa4fa5),CNST_LIMB(0x2ff2ff2ff2ff2ff3),CNST_LIMB(0x2ff2ff2ff2ff2ff3),CNST_LIMB(0x938cc70553e3771b),CNST_LIMB(0xb71c27cddd93e49f),CNST_LIMB(0xb38e3229fcdee63d),CNST_LIMB(0xe684bb63544a4cbf),CNST_LIMB(0xc2f684917ca340fb),CNST_LIMB(0xf747c9cba417526d),CNST_LIMB(0xbb26eb51d7bd49c3),CNST_LIMB(0xbb26eb51d7bd49c3),CNST_LIMB(0xb0a7efb985294093),CNST_LIMB(0xbe4b8c69f259eabb),CNST_LIMB(0x6854d17ed6dc4fb9),CNST_LIMB(0xe1aa904c915f4325),CNST_LIMB(0x3b8206df131cead1),CNST_LIMB(0x79c6009fea76fe13),CNST_LIMB(0xd8c5d381633cd365),CNST_LIMB(0x4841f12b21144677),CNST_LIMB(0x4a91ff68200b0d0f),CNST_LIMB(0x8f9513a58c4f9e8b),CNST_LIMB(0x2b3e690621a42251),CNST_LIMB(0x4f520f00e03c04e7),CNST_LIMB(0x2edf84ee600211d3),CNST_LIMB(0xadcaa2764aaacdfd),CNST_LIMB(0x161f4f9033f4fe63),CNST_LIMB(0x161f4f9033f4fe63),CNST_LIMB(0xbada2932ea4d3e03),CNST_LIMB(0xcec189f3efaa30d3),CNST_LIMB(0xf7475bb68330bf91),CNST_LIMB(0x37eb7bf7d5b01549),CNST_LIMB(0x46b35660a4e91555),CNST_LIMB(0xa567c12d81f151f7),CNST_LIMB(0x4c724007bb2071b1),CNST_LIMB(0xf4a0cce58a016bd),CNST_LIMB(0xfa21068e66106475),CNST_LIMB(0x244ab72b5a318ae1),CNST_LIMB(0x366ce67e080d0f23),CNST_LIMB(0xd666fdae5dd2a449),CNST_LIMB(0xd740ddd0acc06a0d),CNST_LIMB(0xb050bbbb28e6f97b),CNST_LIMB(0x70b003fe890a5c75),CNST_LIMB(0xd03aabff83037427),CNST_LIMB(0x13ec4ca72c783bd7),CNST_LIMB(0x90282c06afdbd96f),CNST_LIMB(0x4414ddb9db4a95d5),CNST_LIMB(0xa2c68735ae6832e9),CNST_LIMB(0xbf72d71455676665),CNST_LIMB(0xa8469fab6b759b7f),CNST_LIMB(0xc1e55b56e606caf9),CNST_LIMB(0x40455630fc4a1cff),CNST_LIMB(0x120a7b0046d16f7),CNST_LIMB(0xa7c3553b08faef23),CNST_LIMB(0x9f0bfd1b08d48639),CNST_LIMB(0xa433ffce9a304d37),CNST_LIMB(0xa22ad1d53915c683),CNST_LIMB(0xcb6cbc723ba5dd1d),CNST_LIMB(0x547fb1b8ab9d0ba3),CNST_LIMB(0x547fb1b8ab9d0ba3),CNST_LIMB(0x8f15a826498852e3)

/* This table contains 2n-popc(2n) for small n */

/* It begins with 2-1=1 (n=1) */
#define TABLE_2N_MINUS_POPC_2N 1,3,4,7,8,10,11,15,16,18,19,22,23,25,26,31,32,34,35,38,39,41,42,46,47,49,50,53,54,56,57,63,64,66,67,70,71,73,74,78
#define TABLE_LIMIT_2N_MINUS_POPC_2N 81
#define ODD_CENTRAL_BINOMIAL_OFFSET (13)

/* This table contains binomial(2k,k)/2^t */

/* It begins with ODD_CENTRAL_BINOMIAL_TABLE_MIN */
#define ONE_LIMB_ODD_CENTRAL_BINOMIAL_TABLE CNST_LIMB(0x13d66b),CNST_LIMB(0x4c842f),CNST_LIMB(0x93ee7d),CNST_LIMB(0x11e9e123),CNST_LIMB(0x22c60053),CNST_LIMB(0x873ae4d1),CNST_LIMB(0x10757bd97),CNST_LIMB(0x80612c6cd),CNST_LIMB(0xfaa556bc1),CNST_LIMB(0x3d3cc24821),CNST_LIMB(0x77cfeb6bbb),CNST_LIMB(0x7550ebd97c7),CNST_LIMB(0xe5f08695caf),CNST_LIMB(0x386120ffce11),CNST_LIMB(0x6eabb28dd6df),CNST_LIMB(0x3658e31c82a8f),CNST_LIMB(0x6ad2050312783),CNST_LIMB(0x1a42902a5af0bf),CNST_LIMB(0x33ac44f881661d),CNST_LIMB(0xcb764f927d82123),CNST_LIMB(0x190c23fa46b93983),CNST_LIMB(0x62b7609e25caf1b9),CNST_LIMB(0xc29cb72925ef2cff)
#define ODD_CENTRAL_BINOMIAL_TABLE_LIMIT (35)

/* This table contains the inverses of elements in the previous table. */
#define ONE_LIMB_ODD_CENTRAL_BINOMIAL_INVERSE_TABLE CNST_LIMB(0x61e5bd199bb12643),CNST_LIMB(0x78321494dc8342cf),CNST_LIMB(0x4fd348704ebf7ad5),CNST_LIMB(0x7e722ba086ab568b),CNST_LIMB(0xa5fcc124265843db),CNST_LIMB(0x89c4a6b18633f431),CNST_LIMB(0x4daa2c15f8ce9227),CNST_LIMB(0x801c618ca9be9605),CNST_LIMB(0x32dc192f948a441),CNST_LIMB(0xd02b90c2bf3be1),CNST_LIMB(0xd897e8c1749aa173),CNST_LIMB(0x54a234fc01fef9f7),CNST_LIMB(0x83ff2ab4d1ff7a4f),CNST_LIMB(0xa427f1c9b304e2f1),CNST_LIMB(0x9c14595d1793651f),CNST_LIMB(0x883a71c607a7b46f),CNST_LIMB(0xd089863c54bc9f2b),CNST_LIMB(0x9022f6bce5d07f3f),CNST_LIMB(0xbec207e218768c35),CNST_LIMB(0x9d70cb4cbb4f168b),CNST_LIMB(0x3c3d3403828a9d2b),CNST_LIMB(0x7672df58c56bc489),CNST_LIMB(0x1e66ca55d727d2ff)

/* This table contains the values t in the formula binomial(2k,k)/2^t */
#define CENTRAL_BINOMIAL_2FAC_TABLE 3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,1,2,2,3
