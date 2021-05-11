/*
 * Copyright 2020-2021 Telecom Paris

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */

#include "common_variables.h"

#include <map>

#include "../common_structures/common_structures.h"

int free5GRAN::G_CRC_24_C[] = {1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1,
                               0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1};

int free5GRAN::G_CRC_24_A[] = {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0,
                               1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1};

int free5GRAN::G_CRC_16[] = {1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

int free5GRAN::PBCH_PAYLOAD_INTERLEAVER[] = {
    16, 23, 18, 17, 8,  30, 10, 6,  24, 7,  0,  5,  3,  2,  1,  4,
    9,  11, 12, 13, 14, 15, 19, 20, 21, 22, 25, 26, 27, 28, 29, 31};

int free5GRAN::SUB_BLOCK_INTERLEAVER_PATTERN[] = {
    0,  1,  2,  4,  3,  5,  6,  7,  8,  16, 9,  17, 10, 18, 11, 19,
    12, 20, 13, 21, 14, 22, 15, 23, 24, 25, 26, 28, 27, 29, 30, 31};

int free5GRAN::INTERLEAVING_PATTERN[] = {
    0,   2,   4,   7,   9,   14,  19,  20,  24,  25,  26,  28,  31,  34,  42,
    45,  49,  50,  51,  53,  54,  56,  58,  59,  61,  62,  65,  66,  67,  69,
    70,  71,  72,  76,  77,  81,  82,  83,  87,  88,  89,  91,  93,  95,  98,
    101, 104, 106, 108, 110, 111, 113, 115, 118, 119, 120, 122, 123, 126, 127,
    129, 132, 134, 138, 139, 140, 1,   3,   5,   8,   10,  15,  21,  27,  29,
    32,  35,  43,  46,  52,  55,  57,  60,  63,  68,  73,  78,  84,  90,  92,
    94,  96,  99,  102, 105, 107, 109, 112, 114, 116, 121, 124, 128, 130, 133,
    135, 141, 6,   11,  16,  22,  30,  33,  36,  44,  47,  64,  74,  79,  85,
    97,  100, 103, 117, 125, 131, 136, 142, 12,  17,  23,  37,  48,  75,  80,
    86,  137, 143, 13,  18,  38,  144, 39,  145, 40,  146, 41,  147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163};

int free5GRAN::POLAR_SEQUENCE_QNMAX_AND_RELIABILITY[] = {
    0,    1,    2,   4,    8,    16,   32,   3,    5,    64,   9,   6,    17,
    10,   18,   128, 12,   33,   65,   20,   256,  34,   24,   36,  7,    129,
    66,   512,  11,  40,   68,   130,  19,   13,   48,   14,   72,  257,  21,
    132,  35,   258, 26,   513,  80,   37,   25,   22,   136,  260, 264,  38,
    514,  96,   67,  41,   144,  28,   69,   42,   516,  49,   74,  272,  160,
    520,  288,  528, 192,  544,  70,   44,   131,  81,   50,   73,  15,   320,
    133,  52,   23,  134,  384,  76,   137,  82,   56,   27,   97,  39,   259,
    84,   138,  145, 261,  29,   43,   98,   515,  88,   140,  30,  146,  71,
    262,  265,  161, 576,  45,   100,  640,  51,   148,  46,   75,  266,  273,
    517,  104,  162, 53,   193,  152,  77,   164,  768,  268,  274, 518,  54,
    83,   57,   521, 112,  135,  78,   289,  194,  85,   276,  522, 58,   168,
    139,  99,   86,  60,   280,  89,   290,  529,  524,  196,  141, 101,  147,
    176,  142,  530, 321,  31,   200,  90,   545,  292,  322,  532, 263,  149,
    102,  105,  304, 296,  163,  92,   47,   267,  385,  546,  324, 208,  386,
    150,  153,  165, 106,  55,   328,  536,  577,  548,  113,  154, 79,   269,
    108,  578,  224, 166,  519,  552,  195,  270,  641,  523,  275, 580,  291,
    59,   169,  560, 114,  277,  156,  87,   197,  116,  170,  61,  531,  525,
    642,  281,  278, 526,  177,  293,  388,  91,   584,  769,  198, 172,  120,
    201,  336,  62,  282,  143,  103,  178,  294,  93,   644,  202, 592,  323,
    392,  297,  770, 107,  180,  151,  209,  284,  648,  94,   204, 298,  400,
    608,  352,  325, 533,  155,  210,  305,  547,  300,  109,  184, 534,  537,
    115,  167,  225, 326,  306,  772,  157,  656,  329,  110,  117, 212,  171,
    776,  330,  226, 549,  538,  387,  308,  216,  416,  271,  279, 158,  337,
    550,  672,  118, 332,  579,  540,  389,  173,  121,  553,  199, 784,  179,
    228,  338,  312, 704,  390,  174,  554,  581,  393,  283,  122, 448,  353,
    561,  203,  63,  340,  394,  527,  582,  556,  181,  295,  285, 232,  124,
    205,  182,  643, 562,  286,  585,  299,  354,  211,  401,  185, 396,  344,
    586,  645,  593, 535,  240,  206,  95,   327,  564,  800,  402, 356,  307,
    301,  417,  213, 568,  832,  588,  186,  646,  404,  227,  896, 594,  418,
    302,  649,  771, 360,  539,  111,  331,  214,  309,  188,  449, 217,  408,
    609,  596,  551, 650,  229,  159,  420,  310,  541,  773,  610, 657,  333,
    119,  600,  339, 218,  368,  652,  230,  391,  313,  450,  542, 334,  233,
    555,  774,  175, 123,  658,  612,  341,  777,  220,  314,  424, 395,  673,
    583,  355,  287, 183,  234,  125,  557,  660,  616,  342,  316, 241,  778,
    563,  345,  452, 397,  403,  207,  674,  558,  785,  432,  357, 187,  236,
    664,  624,  587, 780,  705,  126,  242,  565,  398,  346,  456, 358,  405,
    303,  569,  244, 595,  189,  566,  676,  361,  706,  589,  215, 786,  647,
    348,  419,  406, 464,  680,  801,  362,  590,  409,  570,  788, 597,  572,
    219,  311,  708, 598,  601,  651,  421,  792,  802,  611,  602, 410,  231,
    688,  653,  248, 369,  190,  364,  654,  659,  335,  480,  315, 221,  370,
    613,  422,  425, 451,  614,  543,  235,  412,  343,  372,  775, 317,  222,
    426,  453,  237, 559,  833,  804,  712,  834,  661,  808,  779, 617,  604,
    433,  720,  816, 836,  347,  897,  243,  662,  454,  318,  675, 618,  898,
    781,  376,  428, 665,  736,  567,  840,  625,  238,  359,  457, 399,  787,
    591,  678,  434, 677,  349,  245,  458,  666,  620,  363,  127, 191,  782,
    407,  436,  626, 571,  465,  681,  246,  707,  350,  599,  668, 790,  460,
    249,  682,  573, 411,  803,  789,  709,  365,  440,  628,  689, 374,  423,
    466,  793,  250, 371,  481,  574,  413,  603,  366,  468,  655, 900,  805,
    615,  684,  710, 429,  794,  252,  373,  605,  848,  690,  713, 632,  482,
    806,  427,  904, 414,  223,  663,  692,  835,  619,  472,  455, 796,  809,
    714,  721,  837, 716,  864,  810,  606,  912,  722,  696,  377, 435,  817,
    319,  621,  812, 484,  430,  838,  667,  488,  239,  378,  459, 622,  627,
    437,  380,  818, 461,  496,  669,  679,  724,  841,  629,  351, 467,  438,
    737,  251,  462, 442,  441,  469,  247,  683,  842,  738,  899, 670,  783,
    849,  820,  728, 928,  791,  367,  901,  630,  685,  844,  633, 711,  253,
    691,  824,  902, 686,  740,  850,  375,  444,  470,  483,  415, 485,  905,
    795,  473,  634, 744,  852,  960,  865,  693,  797,  906,  715, 807,  474,
    636,  694,  254, 717,  575,  913,  798,  811,  379,  697,  431, 607,  489,
    866,  723,  486, 908,  718,  813,  476,  856,  839,  725,  698, 914,  752,
    868,  819,  814, 439,  929,  490,  623,  671,  739,  916,  463, 843,  381,
    497,  930,  821, 726,  961,  872,  492,  631,  729,  700,  443, 741,  845,
    920,  382,  822, 851,  730,  498,  880,  742,  445,  471,  635, 932,  687,
    903,  825,  500, 846,  745,  826,  732,  446,  962,  936,  475, 853,  867,
    637,  907,  487, 695,  746,  828,  753,  854,  857,  504,  799, 255,  964,
    909,  719,  477, 915,  638,  748,  944,  869,  491,  699,  754, 858,  478,
    968,  383,  910, 815,  976,  870,  917,  727,  493,  873,  701, 931,  756,
    860,  499,  731, 823,  922,  874,  918,  502,  933,  743,  760, 881,  494,
    702,  921,  501, 876,  847,  992,  447,  733,  827,  934,  882, 937,  963,
    747,  505,  855, 924,  734,  829,  965,  938,  884,  506,  749, 945,  966,
    755,  859,  940, 830,  911,  871,  639,  888,  479,  946,  750, 969,  508,
    861,  757,  970, 919,  875,  862,  758,  948,  977,  923,  972, 761,  877,
    952,  495,  703, 935,  978,  883,  762,  503,  925,  878,  735, 993,  885,
    939,  994,  980, 926,  764,  941,  967,  886,  831,  947,  507, 889,  984,
    751,  942,  996, 971,  890,  509,  949,  973,  1000, 892,  950, 863,  759,
    1008, 510,  979, 953,  763,  974,  954,  879,  981,  982,  927, 995,  765,
    956,  887,  985, 997,  986,  943,  891,  998,  766,  511,  988, 1001, 951,
    1002, 893,  975, 894,  1009, 955,  1004, 1010, 957,  983,  958, 987,  1012,
    999,  1016, 767, 989,  1003, 990,  1005, 959,  1011, 1013, 895, 1006, 1014,
    1017, 1018, 991, 1020, 1007, 1015, 1019, 1021, 1022, 1023};

int free5GRAN::SIZE_SSB_PBCH_SAMPLES = 432;

int free5GRAN::SIZE_SSB_DMRS_SAMPLES = 144;

int free5GRAN::NUM_SC_SSB = 240;

int free5GRAN::INTERVAL_SSB_NO_PBCH_DMRS[] = {48, 191};

int free5GRAN::MAX_I_BAR_SSB = 8;

int free5GRAN::NUM_SYMBOL_PBCH_SSB = 3;

int free5GRAN::SIZE_PSS_SSS_SIGNAL = 127;

int free5GRAN::MAX_N_ID_1 = 336;

int free5GRAN::SIZE_PBCH_POLAR_DECODED = 56;

int free5GRAN::BCH_CRC_LENGTH = 24;

int free5GRAN::BCH_PAYLOAD_SIZE = 32;

int free5GRAN::PSS_BASE_SEQUENCE[] = {0, 1, 1, 0, 1, 1, 1};

int free5GRAN::SSS_BASE_X0_SEQUENCE[] = {1, 0, 0, 0, 0, 0, 0};

int free5GRAN::SSS_BASE_X1_SEQUENCE[] = {1, 0, 0, 0, 0, 0, 0};

int free5GRAN::NUM_SYMBOLS_SSB = 4;

int free5GRAN::DMRS_BASE_X1_SEQUENCE[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                          0, 0, 0, 0, 0, 0, 0, 0, 0};

int free5GRAN::NUM_SUPPORTED_BANDS = 7;

free5GRAN::band free5GRAN::AVAILABLE_BANDS[] = {
    free5GRAN::BAND_N_1, free5GRAN::BAND_N_2, free5GRAN::BAND_N_3,
    free5GRAN::BAND_N_7, free5GRAN::BAND_N_8, free5GRAN::BAND_N_78,
    free5GRAN::BAND_N_28};

int free5GRAN::TS_38_213_TABLE_13_1[16][4] = {
    {1, 24, 2, 0},  {1, 24, 2, 2},  {1, 24, 2, 4},  {1, 24, 3, 0},
    {1, 24, 3, 2},  {1, 24, 3, 4},  {1, 48, 1, 12}, {1, 48, 1, 16},
    {1, 48, 2, 12}, {1, 48, 2, 16}, {1, 48, 3, 12}, {1, 48, 3, 16},
    {1, 96, 1, 38}, {1, 96, 2, 38}, {1, 96, 3, 38}, {0, 0, 0, 0}};

int free5GRAN::TS_38_213_TABLE_13_2[16][4] = {
    {1, 24, 2, 5},  {1, 24, 2, 6},  {1, 24, 2, 7},  {1, 24, 2, 8},
    {1, 24, 3, 5},  {1, 24, 3, 6},  {1, 24, 3, 7},  {1, 24, 3, 8},
    {1, 48, 1, 18}, {1, 48, 1, 20}, {1, 48, 2, 18}, {1, 48, 2, 20},
    {1, 48, 3, 18}, {1, 48, 3, 20}, {0, 0, 0, 0},   {0, 0, 0, 0},
};

int free5GRAN::TS_38_213_TABLE_13_3[16][4] = {
    {1, 48, 1, 2},  {1, 48, 1, 6}, {1, 48, 2, 2},  {1, 48, 2, 6},
    {1, 48, 3, 2},  {1, 48, 3, 6}, {1, 96, 1, 28}, {1, 96, 2, 28},
    {1, 96, 3, 28}, {0, 0, 0, 0},  {0, 0, 0, 0},   {0, 0, 0, 0},
    {0, 0, 0, 0},   {0, 0, 0, 0},  {0, 0, 0, 0},   {0, 0, 0, 0},
};

int free5GRAN::TS_38_213_TABLE_13_4[16][4] = {
    {1, 24, 2, 0},  {1, 24, 2, 1},  {1, 24, 2, 2},  {1, 24, 2, 3},
    {1, 24, 2, 4},  {1, 24, 3, 0},  {1, 24, 3, 1},  {1, 24, 3, 2},
    {1, 24, 3, 3},  {1, 24, 3, 4},  {1, 48, 1, 12}, {1, 48, 1, 14},
    {1, 48, 1, 16}, {1, 48, 2, 12}, {1, 48, 2, 14}, {1, 48, 2, 16},
};

float free5GRAN::TS_38_213_TABLE_13_11[16][4] = {
    {0, 1, 1, 0}, {0, 2, 0.5, -1}, {2, 1, 1, 0}, {2, 2, 0.5, -1},
    {5, 1, 1, 0}, {5, 1, 0.5, -1}, {7, 1, 1, 0}, {7, 2, 0.5, -1},
    {0, 1, 2, 0}, {5, 1, 2, 0},    {0, 1, 1, 1}, {0, 1, 1, 2},
    {2, 1, 1, 1}, {2, 1, 1, 2},    {5, 1, 1, 1}, {5, 1, 1, 2},
};

int free5GRAN::TS_38_214_TABLE_5_1_2_1_1_2[16][2][4] = {{
                                                            {0, 0, 2, 12},
                                                            {0, 0, 3, 11},
                                                        },
                                                        {
                                                            {0, 0, 2, 10},
                                                            {0, 0, 3, 9},
                                                        },
                                                        {
                                                            {0, 0, 2, 9},
                                                            {0, 0, 3, 8},
                                                        },
                                                        {
                                                            {0, 0, 2, 7},
                                                            {0, 0, 3, 6},
                                                        },
                                                        {
                                                            {0, 0, 2, 5},
                                                            {0, 0, 3, 4},
                                                        },
                                                        {
                                                            {1, 0, 9, 4},
                                                            {1, 0, 10, 4},
                                                        },
                                                        {
                                                            {1, 0, 4, 4},
                                                            {1, 0, 6, 4},
                                                        },
                                                        {
                                                            {1, 0, 5, 7},
                                                            {1, 0, 5, 7},
                                                        },
                                                        {
                                                            {1, 0, 5, 2},
                                                            {1, 0, 5, 2},
                                                        },
                                                        {
                                                            {1, 0, 9, 2},
                                                            {1, 0, 9, 2},
                                                        },
                                                        {
                                                            {1, 0, 12, 2},
                                                            {1, 0, 12, 2},
                                                        },
                                                        {
                                                            {0, 0, 1, 13},
                                                            {0, 0, 1, 13},
                                                        },
                                                        {
                                                            {0, 0, 1, 6},
                                                            {0, 0, 1, 6},
                                                        },
                                                        {
                                                            {0, 0, 2, 4},
                                                            {0, 0, 2, 4},
                                                        },
                                                        {
                                                            {1, 0, 4, 7},
                                                            {1, 0, 4, 7},
                                                        },
                                                        {
                                                            {1, 0, 8, 4},
                                                            {1, 0, 8, 4},
                                                        }};

int free5GRAN::TS_38_214_TABLE_5_1_3_1_1[29][2] = {
    {2, 120}, {2, 157}, {2, 193}, {2, 251}, {2, 308}, {2, 379},
    {2, 449}, {2, 526}, {2, 602}, {2, 679}, {4, 340}, {4, 378},
    {4, 434}, {4, 490}, {4, 553}, {4, 616}, {4, 658}, {6, 438},
    {6, 466}, {6, 517}, {6, 567}, {6, 616}, {6, 666}, {6, 719},
    {6, 772}, {6, 822}, {6, 873}, {6, 910}, {6, 948},
};

int free5GRAN::TS_38_214_TABLE_5_1_3_2_1[93] = {
    24,   32,   40,   48,   56,   64,   72,   80,   88,   96,   104,  112,
    120,  128,  136,  144,  152,  160,  168,  176,  184,  192,  208,  224,
    240,  256,  272,  288,  304,  320,  336,  352,  368,  384,  408,  432,
    456,  480,  504,  528,  552,  576,  608,  640,  672,  704,  736,  768,
    808,  848,  888,  928,  984,  1032, 1064, 1128, 1160, 1192, 1224, 1256,
    1288, 1320, 1352, 1416, 1480, 1544, 1608, 1672, 1736, 1800, 1864, 1928,
    2024, 2088, 2152, 2216, 2280, 2408, 2472, 2536, 2600, 2664, 2728, 2792,
    2856, 2976, 3104, 3240, 3368, 3496, 3624, 3752, 3824};

int free5GRAN::TS_38_212_TABLE_5_3_2_1[8][8] = {
    {2, 4, 8, 16, 32, 64, 128, 256},    {3, 6, 12, 24, 48, 96, 192, 384},
    {-1, 5, 10, 20, 40, 80, 160, 320},  {-1, -1, 7, 14, 28, 56, 112, 224},
    {-1, -1, 9, 18, 36, 72, 144, 288},  {-1, -1, 11, 22, 44, 88, 176, 352},
    {-1, -1, -1, 13, 26, 52, 105, 208}, {-1, -1, -1, 15, 30, 60, 120, 240}};

int free5GRAN::NUMBER_SYMBOLS_PER_SLOT_NORMAL_CP = 14;

int free5GRAN::NUMBER_REG_PER_CCE = 6;

int free5GRAN::SI_RNTI[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

int free5GRAN::PSS_SSS_FFT_SIZE = 128;

fftw_plan free5GRAN::FFT_PLAN_15_KHZ = NULL;

fftw_plan free5GRAN::FFT_PLAN_30_KHZ = NULL;

fftw_plan free5GRAN::FFT_PLAN_60_KHZ = NULL;
