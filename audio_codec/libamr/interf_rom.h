/*
 * ===================================================================
 *  TS 26.104
 *  R99   V3.5.0 2003-03
 *  REL-4 V4.4.0 2003-03
 *  REL-5 V5.1.0 2003-03
 *  3GPP AMR Floating-point Speech Codec
 * ===================================================================
 *
 */

/*
 * interf_rom.h
 *
 *
 * Project:
 *    AMR Floating-Point Codec
 *
 * Contains:
 *    Tables:           Subjective importance
 *                      Homing frames
 *
 *
 */

#ifndef _interf_rom_h_
#define _interf_rom_h_

/*
 * include files
 */
#include"typedef.h"

/*
 * definition of constants
 */

/* number of parameters */
#define PRMNO_MR475 17
#define PRMNO_MR515 19
#define PRMNO_MR59  19
#define PRMNO_MR67  19
#define PRMNO_MR74  19
#define PRMNO_MR795 23
#define PRMNO_MR102 39
#define PRMNO_MR122 57
#define PRMNO_MRDTX 5

#ifdef ENABLE_CPU2_DECODER
CPU2_DATA_START
#endif

/*
 * tables
 */
#ifndef IF2
#ifndef ETSI
static const UWord8 block_size[16] = { 13, 14, 16, 18, 20, 21, 27, 32,
                                       6 , 0 , 0 , 0 , 0 , 0 , 0 , 1
                                     };

static const UWord8 toc_byte[16] = {0x04, 0x0C, 0x14, 0x1C, 0x24, 0x2C, 0x34, 0x3C,
                                    0x44, 0x4C, 0x54, 0x5C, 0x64, 0x6C, 0x74, 0x7C
                                   };
#endif
#else
/* One encoded frame (bytes) */
static const UWord8 block_size[16] = { 13, 14, 16, 18, 19, 21, 26, 31,
                                       5 , 0 , 0 , 0 , 0 , 0 , 0 , 1
                                     };
#endif

/* Subjective importance of the speech encoded bits */
static Word16 order_MR475[] = {
    0, 0x80,
    0, 0x40,
    0, 0x20,
    0, 0x10,
    0, 0x8,
    0, 0x4,
    0, 0x2,
    0, 0x1,
    1, 0x80,
    1, 0x40,
    1, 0x20,
    1, 0x10,
    1, 0x8,
    1, 0x4,
    1, 0x2,
    1, 0x1,
    3, 0x80,
    3, 0x40,
    3, 0x20,
    3, 0x10,
    3, 0x8,
    3, 0x4,
    7, 0x8,
    7, 0x4,
    10, 0x8,
    10, 0x4,
    14, 0x8,
    14, 0x4,
    6, 0x1,
    6, 0x2,
    6, 0x4,
    6, 0x8,
    13, 0x1,
    13, 0x2,
    13, 0x4,
    13, 0x8,
    2, 0x20,
    2, 0x10,
    2, 0x4,
    2, 0x1,
    13, 0x10,
    13, 0x20,
    13, 0x40,
    13, 0x80,
    3, 0x2,
    3, 0x1,
    6, 0x10,
    6, 0x20,
    6, 0x40,
    6, 0x80,
    5, 0x2,
    5, 0x1,
    2, 0x40,
    2, 0x8,
    2, 0x2,
    7, 0x2,
    7, 0x1,
    9, 0x2,
    9, 0x1,
    10, 0x2,
    10, 0x1,
    12, 0x2,
    12, 0x1,
    14, 0x2,
    14, 0x1,
    16, 0x2,
    16, 0x1,
    4, 0x20,
    4, 0x10,
    4, 0x4,
    4, 0x2,
    8, 0x20,
    8, 0x10,
    8, 0x4,
    8, 0x2,
    11, 0x20,
    11, 0x10,
    11, 0x4,
    11, 0x2,
    15, 0x20,
    15, 0x10,
    15, 0x4,
    15, 0x2,
    4, 0x8,
    8, 0x8,
    11, 0x8,
    15, 0x8,
    4, 0x1,
    8, 0x1,
    11, 0x1,
    15, 0x1,
    4, 0x40,
    8, 0x40,
    11, 0x40,
    15, 0x40
};
static Word16 order_MR515[] = {
    0, 0x1,
    0, 0x2,
    0, 0x4,
    0, 0x8,
    0, 0x10,
    0, 0x20,
    0, 0x40,
    0, 0x80,
    1, 0x1,
    1, 0x2,
    1, 0x4,
    1, 0x8,
    1, 0x10,
    1, 0x20,
    1, 0x40,
    1, 0x80,
    3, 0x80,
    3, 0x40,
    3, 0x20,
    3, 0x10,
    3, 0x8,
    7, 0x8,
    11, 0x8,
    15, 0x8,
    6, 0x1,
    6, 0x2,
    6, 0x4,
    10, 0x1,
    10, 0x2,
    10, 0x4,
    14, 0x1,
    14, 0x2,
    14, 0x4,
    18, 0x1,
    18, 0x2,
    18, 0x4,
    6, 0x8,
    10, 0x8,
    14, 0x8,
    18, 0x8,
    3, 0x4,
    7, 0x4,
    11, 0x4,
    15, 0x4,
    2, 0x10,
    6, 0x10,
    10, 0x10,
    14, 0x10,
    18, 0x10,
    3, 0x2,
    7, 0x2,
    11, 0x2,
    2, 0x20,
    2, 0x4,
    2, 0x1,
    6, 0x20,
    10, 0x20,
    14, 0x20,
    18, 0x20,
    2, 0x2,
    3, 0x1,
    7, 0x1,
    11, 0x1,
    15, 0x2,
    2, 0x8,
    2, 0x40,
    15, 0x1,
    5, 0x1,
    5, 0x2,
    9, 0x1,
    9, 0x2,
    13, 0x1,
    4, 0x4,
    8, 0x4,
    12, 0x4,
    16, 0x4,
    13, 0x2,
    17, 0x1,
    17, 0x2,
    4, 0x2,
    8, 0x2,
    12, 0x2,
    16, 0x2,
    4, 0x20,
    8, 0x20,
    4, 0x10,
    8, 0x10,
    12, 0x20,
    12, 0x10,
    16, 0x20,
    16, 0x10,
    4, 0x40,
    8, 0x40,
    12, 0x40,
    16, 0x40,
    4, 0x1,
    8, 0x1,
    12, 0x1,
    16, 0x1,
    4, 0x8,
    8, 0x8,
    12, 0x8,
    16, 0x8
};
static Word16 order_MR59[] = {
    0, 0x80,
    0, 0x40,
    0, 0x8,
    0, 0x4,
    0, 0x10,
    0, 0x2,
    0, 0x1,
    0, 0x20,
    1, 0x8,
    1, 0x2,
    1, 0x100,
    1, 0x80,
    1, 0x20,
    1, 0x10,
    1, 0x4,
    1, 0x40,
    1, 0x1,
    3, 0x20,
    11, 0x20,
    3, 0x10,
    11, 0x10,
    3, 0x40,
    11, 0x40,
    3, 0x80,
    11, 0x80,
    3, 0x8,
    11, 0x8,
    7, 0x8,
    15, 0x8,
    6, 0x1,
    10, 0x1,
    14, 0x1,
    18, 0x1,
    3, 0x4,
    11, 0x4,
    7, 0x4,
    15, 0x4,
    6, 0x2,
    10, 0x2,
    14, 0x2,
    18, 0x2,
    7, 0x2,
    15, 0x2,
    3, 0x2,
    11, 0x2,
    3, 0x1,
    11, 0x1,
    6, 0x4,
    10, 0x4,
    14, 0x4,
    18, 0x4,
    6, 0x8,
    10, 0x8,
    14, 0x8,
    18, 0x8,
    6, 0x10,
    10, 0x10,
    14, 0x10,
    18, 0x10,
    2, 0x40,
    2, 0x10,
    2, 0x4,
    2, 0x8,
    2, 0x80,
    2, 0x100,
    2, 0x20,
    2, 0x2,
    17, 0x1,
    5, 0x2,
    13, 0x2,
    17, 0x2,
    9, 0x2,
    9, 0x1,
    5, 0x1,
    13, 0x1,
    2, 0x1,
    6, 0x20,
    10, 0x20,
    14, 0x20,
    18, 0x20,
    7, 0x1,
    15, 0x1,
    4, 0x4,
    8, 0x4,
    12, 0x4,
    16, 0x4,
    4, 0x8,
    8, 0x8,
    12, 0x8,
    16, 0x8,
    4, 0x40,
    8, 0x40,
    12, 0x40,
    16, 0x40,
    4, 0x80,
    8, 0x80,
    12, 0x80,
    16, 0x80,
    4, 0x100,
    8, 0x100,
    12, 0x100,
    16, 0x100,
    4, 0x1,
    8, 0x1,
    12, 0x1,
    16, 0x1,
    4, 0x2,
    8, 0x2,
    12, 0x2,
    16, 0x2,
    4, 0x10,
    8, 0x10,
    12, 0x10,
    16, 0x10,
    4, 0x20,
    8, 0x20,
    12, 0x20,
    16, 0x20
};
static Word16 order_MR67[] = {
    0, 0x80,
    0, 0x40,
    0, 0x8,
    0, 0x10,
    0, 0x4,
    0, 0x2,
    1, 0x8,
    0, 0x1,
    0, 0x20,
    1, 0x100,
    1, 0x80,
    1, 0x20,
    1, 0x2,
    1, 0x10,
    1, 0x4,
    1, 0x40,
    3, 0x20,
    11, 0x20,
    3, 0x10,
    11, 0x10,
    3, 0x40,
    11, 0x40,
    3, 0x80,
    11, 0x80,
    3, 0x8,
    11, 0x8,
    1, 0x1,
    7, 0x8,
    15, 0x8,
    7, 0x4,
    15, 0x4,
    3, 0x4,
    11, 0x4,
    7, 0x2,
    15, 0x2,
    6, 0x40,
    10, 0x40,
    14, 0x40,
    18, 0x40,
    3, 0x2,
    11, 0x2,
    6, 0x8,
    10, 0x8,
    14, 0x8,
    18, 0x8,
    6, 0x4,
    10, 0x4,
    14, 0x4,
    18, 0x4,
    7, 0x1,
    15, 0x1,
    3, 0x1,
    11, 0x1,
    2, 0x40,
    2, 0x4,
    6, 0x2,
    10, 0x2,
    14, 0x2,
    18, 0x2,
    2, 0x10,
    2, 0x8,
    2, 0x80,
    2, 0x100,
    2, 0x20,
    2, 0x2,
    2, 0x1,
    6, 0x10,
    10, 0x10,
    14, 0x10,
    18, 0x10,
    5, 0x1,
    9, 0x1,
    13, 0x1,
    17, 0x1,
    6, 0x1,
    10, 0x1,
    14, 0x1,
    18, 0x1,
    5, 0x2,
    9, 0x2,
    13, 0x2,
    17, 0x2,
    18, 0x20,
    14, 0x20,
    10, 0x20,
    6, 0x20,
    5, 0x4,
    9, 0x4,
    13, 0x4,
    17, 0x4,
    4, 0x4,
    8, 0x4,
    12, 0x4,
    16, 0x4,
    4, 0x20,
    8, 0x20,
    12, 0x20,
    16, 0x20,
    4, 0x40,
    8, 0x40,
    12, 0x40,
    16, 0x40,
    4, 0x200,
    8, 0x200,
    12, 0x200,
    16, 0x200,
    4, 0x400,
    8, 0x400,
    12, 0x400,
    16, 0x400,
    4, 0x1,
    8, 0x1,
    12, 0x1,
    16, 0x1,
    4, 0x2,
    8, 0x2,
    12, 0x2,
    16, 0x2,
    4, 0x8,
    8, 0x8,
    12, 0x8,
    16, 0x8,
    4, 0x10,
    8, 0x10,
    12, 0x10,
    16, 0x10,
    4, 0x80,
    8, 0x80,
    12, 0x80,
    16, 0x80,
    4, 0x100,
    8, 0x100,
    12, 0x100,
    16, 0x100
};
static Word16 order_MR74[] = {
    0, 0x80,
    0, 0x40,
    0, 0x20,
    0, 0x10,
    0, 0x8,
    0, 0x4,
    0, 0x2,
    0, 0x1,
    1, 0x100,
    1, 0x80,
    1, 0x40,
    1, 0x20,
    1, 0x10,
    1, 0x8,
    1, 0x4,
    1, 0x2,
    1, 0x1,
    3, 0x80,
    11, 0x80,
    3, 0x40,
    11, 0x40,
    3, 0x20,
    11, 0x20,
    3, 0x10,
    11, 0x10,
    3, 0x8,
    11, 0x8,
    6, 0x40,
    10, 0x40,
    14, 0x40,
    18, 0x40,
    6, 0x20,
    10, 0x20,
    14, 0x20,
    18, 0x20,
    6, 0x8,
    10, 0x8,
    14, 0x8,
    18, 0x8,
    6, 0x4,
    10, 0x4,
    14, 0x4,
    18, 0x4,
    7, 0x10,
    15, 0x10,
    7, 0x8,
    15, 0x8,
    2, 0x10,
    2, 0x8,
    2, 0x4,
    2, 0x100,
    2, 0x80,
    2, 0x40,
    3, 0x4,
    7, 0x4,
    11, 0x4,
    15, 0x4,
    6, 0x2,
    10, 0x2,
    14, 0x2,
    18, 0x2,
    2, 0x20,
    2, 0x2,
    2, 0x1,
    5, 0x1,
    9, 0x1,
    13, 0x1,
    17, 0x1,
    6, 0x1,
    10, 0x1,
    14, 0x1,
    18, 0x1,
    5, 0x2,
    9, 0x2,
    13, 0x2,
    17, 0x2,
    5, 0x4,
    9, 0x4,
    6, 0x10,
    10, 0x10,
    14, 0x10,
    18, 0x10,
    13, 0x4,
    17, 0x4,
    5, 0x8,
    9, 0x8,
    13, 0x8,
    17, 0x8,
    3, 0x2,
    3, 0x1,
    7, 0x2,
    7, 0x1,
    11, 0x2,
    11, 0x1,
    15, 0x2,
    15, 0x1,
    4, 0x20,
    4, 0x10,
    4, 0x8,
    4, 0x4,
    4, 0x2,
    4, 0x1,
    8, 0x20,
    8, 0x10,
    8, 0x8,
    8, 0x4,
    8, 0x2,
    8, 0x1,
    12, 0x20,
    12, 0x10,
    12, 0x8,
    12, 0x4,
    12, 0x2,
    12, 0x1,
    16, 0x20,
    16, 0x10,
    16, 0x8,
    16, 0x4,
    16, 0x2,
    16, 0x1,
    4, 0x1000,
    8, 0x1000,
    12, 0x1000,
    16, 0x1000,
    4, 0x800,
    8, 0x800,
    12, 0x800,
    16, 0x800,
    4, 0x400,
    8, 0x400,
    12, 0x400,
    16, 0x400,
    4, 0x200,
    8, 0x200,
    12, 0x200,
    16, 0x200,
    4, 0x100,
    8, 0x100,
    12, 0x100,
    16, 0x100,
    4, 0x80,
    8, 0x80,
    12, 0x80,
    16, 0x80,
    4, 0x40,
    8, 0x40,
    12, 0x40,
    16, 0x40
};
static Word16 order_MR795[] = {
    0, 0x1,
    0, 0x2,
    0, 0x4,
    0, 0x8,
    0, 0x10,
    0, 0x20,
    0, 0x40,
    1, 0x8,
    1, 0x2,
    1, 0x100,
    1, 0x80,
    1, 0x20,
    1, 0x10,
    1, 0x4,
    1, 0x40,
    1, 0x1,
    2, 0x40,
    2, 0x10,
    2, 0x4,
    2, 0x8,
    2, 0x80,
    2, 0x100,
    2, 0x20,
    7, 0x10,
    12, 0x10,
    17, 0x10,
    22, 0x10,
    7, 0x8,
    12, 0x8,
    17, 0x8,
    22, 0x8,
    7, 0x4,
    12, 0x4,
    17, 0x4,
    22, 0x4,
    6, 0x8,
    11, 0x8,
    16, 0x8,
    21, 0x8,
    6, 0x4,
    11, 0x4,
    16, 0x4,
    21, 0x4,
    3, 0x80,
    13, 0x80,
    3, 0x40,
    13, 0x40,
    3, 0x20,
    13, 0x20,
    3, 0x10,
    13, 0x10,
    3, 0x8,
    13, 0x8,
    8, 0x20,
    18, 0x20,
    8, 0x10,
    18, 0x10,
    8, 0x8,
    18, 0x8,
    7, 0x2,
    12, 0x2,
    17, 0x2,
    22, 0x2,
    3, 0x4,
    13, 0x4,
    8, 0x4,
    18, 0x4,
    0, 0x80,
    0, 0x100,
    2, 0x2,
    2, 0x1,
    3, 0x2,
    13, 0x2,
    3, 0x1,
    13, 0x1,
    8, 0x2,
    18, 0x2,
    8, 0x1,
    18, 0x1,
    6, 0x2,
    11, 0x2,
    16, 0x2,
    21, 0x2,
    7, 0x1,
    12, 0x1,
    17, 0x1,
    22, 0x1,
    6, 0x1,
    11, 0x1,
    16, 0x1,
    21, 0x1,
    15, 0x1,
    15, 0x2,
    15, 0x4,
    4, 0x2,
    9, 0x2,
    14, 0x2,
    19, 0x2,
    4, 0x10,
    9, 0x10,
    14, 0x10,
    19, 0x10,
    4, 0x80,
    9, 0x80,
    14, 0x80,
    19, 0x80,
    4, 0x800,
    9, 0x800,
    14, 0x800,
    19, 0x800,
    15, 0x8,
    20, 0x1,
    20, 0x2,
    20, 0x4,
    20, 0x8,
    10, 0x1,
    10, 0x2,
    10, 0x4,
    10, 0x8,
    5, 0x1,
    5, 0x2,
    5, 0x4,
    5, 0x8,
    4, 0x1,
    4, 0x4,
    4, 0x8,
    4, 0x20,
    4, 0x100,
    4, 0x1000,
    9, 0x1,
    9, 0x4,
    9, 0x8,
    9, 0x20,
    9, 0x100,
    9, 0x1000,
    14, 0x1,
    14, 0x4,
    14, 0x8,
    14, 0x20,
    14, 0x100,
    14, 0x1000,
    19, 0x1,
    19, 0x4,
    19, 0x8,
    19, 0x20,
    19, 0x100,
    19, 0x1000,
    4, 0x40,
    9, 0x40,
    14, 0x40,
    19, 0x40,
    4, 0x400,
    9, 0x400,
    14, 0x400,
    19, 0x400,
    4, 0x200,
    9, 0x200,
    14, 0x200,
    19, 0x200,
    0, 0x1,
    0, 0x2,
    0, 0x4,
    0, 0x8,
    0, 0x10,
    0, 0x20,
    0, 0x40,
    1, 0x8,
    1, 0x2,
    1, 0x100,
    1, 0x80,
    1, 0x20,
    1, 0x10,
    1, 0x4,
    1, 0x40,
    1, 0x1,
    2, 0x40,
    2, 0x10,
    2, 0x4,
    2, 0x8,
    2, 0x80,
    2, 0x100,
    2, 0x20,
    7, 0x10,
    12, 0x10,
    17, 0x10,
    22, 0x10,
    7, 0x8,
    12, 0x8,
    17, 0x8,
    22, 0x8,
    7, 0x4,
    12, 0x4,
    17, 0x4,
    22, 0x4,
    6, 0x8,
    11, 0x8,
    16, 0x8,
    21, 0x8,
    6, 0x4,
    11, 0x4,
    16, 0x4,
    21, 0x4,
    3, 0x80,
    13, 0x80,
    3, 0x40,
    13, 0x40,
    3, 0x20,
    13, 0x20,
    3, 0x10,
    13, 0x10,
    3, 0x8,
    13, 0x8,
    8, 0x20,
    18, 0x20,
    8, 0x10,
    18, 0x10,
    8, 0x8,
    18, 0x8,
    7, 0x2,
    12, 0x2,
    17, 0x2,
    22, 0x2,
    3, 0x4,
    13, 0x4,
    8, 0x4,
    18, 0x4,
    0, 0x80,
    0, 0x100,
    2, 0x2,
    2, 0x1,
    3, 0x2,
    13, 0x2,
    3, 0x1,
    13, 0x1,
    8, 0x2,
    18, 0x2,
    8, 0x1,
    18, 0x1,
    6, 0x2,
    11, 0x2,
    16, 0x2,
    21, 0x2,
    7, 0x1,
    12, 0x1,
    17, 0x1,
    22, 0x1,
    6, 0x1,
    11, 0x1,
    16, 0x1,
    21, 0x1,
    15, 0x1,
    15, 0x2,
    15, 0x4,
    4, 0x2,
    9, 0x2,
    14, 0x2,
    19, 0x2,
    4, 0x10,
    9, 0x10,
    14, 0x10,
    19, 0x10,
    4, 0x80,
    9, 0x80,
    14, 0x80,
    19, 0x80,
    4, 0x800,
    9, 0x800,
    14, 0x800,
    19, 0x800,
    15, 0x8,
    20, 0x1,
    20, 0x2,
    20, 0x4,
    20, 0x8,
    10, 0x1,
    10, 0x2,
    10, 0x4,
    10, 0x8,
    5, 0x1,
    5, 0x2,
    5, 0x4,
    5, 0x8,
    4, 0x1,
    4, 0x4,
    4, 0x8,
    4, 0x20,
    4, 0x100,
    4, 0x1000,
    9, 0x1,
    9, 0x4,
    9, 0x8,
    9, 0x20,
    9, 0x100,
    9, 0x1000,
    14, 0x1,
    14, 0x4,
    14, 0x8,
    14, 0x20,
    14, 0x100,
    14, 0x1000,
    19, 0x1,
    19, 0x4,
    19, 0x8,
    19, 0x20,
    19, 0x100,
    19, 0x1000,
    4, 0x40,
    9, 0x40,
    14, 0x40,
    19, 0x40,
    4, 0x400,
    9, 0x400,
    14, 0x400,
    19, 0x400,
    4, 0x200,
    9, 0x200,
    14, 0x200,
    19, 0x200
};
static Word16 order_MR102[] = {
    0, 0x1,
    0, 0x2,
    0, 0x4,
    0, 0x8,
    0, 0x10,
    0, 0x20,
    0, 0x40,
    0, 0x80,
    1, 0x1,
    1, 0x2,
    1, 0x4,
    1, 0x8,
    1, 0x10,
    1, 0x20,
    1, 0x40,
    1, 0x80,
    1, 0x100,
    3, 0x80,
    3, 0x40,
    3, 0x20,
    3, 0x10,
    3, 0x8,
    3, 0x4,
    21, 0x80,
    21, 0x40,
    21, 0x20,
    21, 0x10,
    21, 0x8,
    21, 0x4,
    12, 0x10,
    12, 0x8,
    30, 0x10,
    30, 0x8,
    11, 0x40,
    11, 0x8,
    11, 0x4,
    20, 0x40,
    20, 0x8,
    20, 0x4,
    29, 0x40,
    29, 0x8,
    29, 0x4,
    38, 0x40,
    38, 0x8,
    38, 0x4,
    3, 0x2,
    3, 0x1,
    21, 0x2,
    21, 0x1,
    12, 0x4,
    12, 0x2,
    30, 0x4,
    30, 0x2,
    11, 0x20,
    20, 0x20,
    29, 0x20,
    38, 0x20,
    2, 0x40,
    2, 0x4,
    2, 0x10,
    2, 0x8,
    2, 0x80,
    2, 0x100,
    2, 0x20,
    2, 0x2,
    2, 0x1,
    7, 0x1,
    6, 0x1,
    5, 0x1,
    4, 0x1,
    16, 0x1,
    15, 0x1,
    14, 0x1,
    13, 0x1,
    25, 0x1,
    24, 0x1,
    23, 0x1,
    22, 0x1,
    34, 0x1,
    33, 0x1,
    32, 0x1,
    31, 0x1,
    11, 0x2,
    11, 0x10,
    11, 0x1,
    20, 0x2,
    20, 0x10,
    20, 0x1,
    29, 0x2,
    29, 0x10,
    29, 0x1,
    38, 0x2,
    38, 0x10,
    38, 0x1,
    12, 0x1,
    30, 0x1,
    17, 0x200,
    17, 0x100,
    18, 0x100,
    18, 0x200,
    18, 0x80,
    17, 0x80,
    18, 0x20,
    17, 0x20,
    17, 0x40,
    18, 0x40,
    19, 0x40,
    19, 0x20,
    18, 0x10,
    19, 0x8,
    17, 0x10,
    19, 0x10,
    17, 0x8,
    18, 0x8,
    26, 0x200,
    26, 0x100,
    27, 0x100,
    27, 0x200,
    27, 0x80,
    26, 0x80,
    27, 0x20,
    26, 0x20,
    26, 0x40,
    27, 0x40,
    28, 0x40,
    28, 0x20,
    27, 0x10,
    28, 0x8,
    26, 0x10,
    28, 0x10,
    26, 0x8,
    27, 0x8,
    35, 0x200,
    35, 0x100,
    36, 0x100,
    36, 0x200,
    36, 0x80,
    35, 0x80,
    36, 0x20,
    35, 0x20,
    35, 0x40,
    36, 0x40,
    37, 0x40,
    37, 0x20,
    36, 0x10,
    37, 0x8,
    35, 0x10,
    37, 0x10,
    35, 0x8,
    36, 0x8,
    8, 0x200,
    8, 0x100,
    9, 0x100,
    9, 0x200,
    9, 0x80,
    8, 0x80,
    9, 0x20,
    8, 0x20,
    8, 0x40,
    9, 0x40,
    10, 0x40,
    10, 0x20,
    9, 0x10,
    10, 0x8,
    8, 0x10,
    10, 0x10,
    8, 0x8,
    9, 0x8,
    37, 0x4,
    35, 0x1,
    36, 0x1,
    37, 0x1,
    35, 0x4,
    37, 0x2,
    35, 0x2,
    36, 0x4,
    36, 0x2,
    28, 0x4,
    26, 0x1,
    27, 0x1,
    28, 0x1,
    26, 0x4,
    28, 0x2,
    26, 0x2,
    27, 0x4,
    27, 0x2,
    19, 0x4,
    17, 0x1,
    18, 0x1,
    19, 0x1,
    17, 0x4,
    19, 0x2,
    17, 0x2,
    18, 0x4,
    18, 0x2,
    10, 0x4,
    8, 0x1,
    9, 0x1,
    10, 0x1,
    8, 0x4,
    10, 0x2,
    8, 0x2,
    9, 0x4,
    9, 0x2
};
static Word16 order_MR122[] = {
    0, 0x40,
    0, 0x20,
    0, 0x10,
    0, 0x8,
    0, 0x4,
    0, 0x2,
    0, 0x1,
    1, 0x80,
    1, 0x40,
    1, 0x20,
    1, 0x10,
    1, 0x8,
    1, 0x4,
    1, 0x2,
    1, 0x1,
    2, 0x1,
    2, 0x100,
    2, 0x80,
    2, 0x40,
    2, 0x20,
    2, 0x10,
    2, 0x8,
    2, 0x4,
    2, 0x2,
    3, 0x80,
    3, 0x40,
    3, 0x20,
    3, 0x10,
    3, 0x8,
    5, 0x100,
    31, 0x100,
    5, 0x80,
    31, 0x80,
    5, 0x40,
    31, 0x40,
    5, 0x20,
    31, 0x20,
    5, 0x10,
    31, 0x10,
    5, 0x8,
    31, 0x8,
    5, 0x4,
    31, 0x4,
    5, 0x2,
    31, 0x2,
    5, 0x1,
    31, 0x1,
    6, 0x8,
    19, 0x8,
    32, 0x8,
    45, 0x8,
    6, 0x4,
    19, 0x4,
    32, 0x4,
    45, 0x4,
    6, 0x2,
    19, 0x2,
    32, 0x2,
    45, 0x2,
    17, 0x10,
    30, 0x10,
    43, 0x10,
    56, 0x10,
    17, 0x8,
    30, 0x8,
    43, 0x8,
    56, 0x8,
    17, 0x4,
    30, 0x4,
    43, 0x4,
    56, 0x4,
    18, 0x20,
    44, 0x20,
    18, 0x10,
    44, 0x10,
    18, 0x8,
    44, 0x8,
    18, 0x4,
    44, 0x4,
    18, 0x2,
    44, 0x2,
    3, 0x4,
    3, 0x2,
    3, 0x1,
    4, 0x20,
    4, 0x10,
    4, 0x8,
    4, 0x4,
    6, 0x1,
    19, 0x1,
    32, 0x1,
    45, 0x1,
    17, 0x2,
    30, 0x2,
    43, 0x2,
    56, 0x2,
    7, 0x8,
    20, 0x8,
    33, 0x8,
    46, 0x8,
    8, 0x8,
    21, 0x8,
    34, 0x8,
    47, 0x8,
    17, 0x1,
    30, 0x1,
    43, 0x1,
    56, 0x1,
    9, 0x8,
    22, 0x8,
    35, 0x8,
    48, 0x8,
    10, 0x8,
    23, 0x8,
    36, 0x8,
    49, 0x8,
    11, 0x8,
    24, 0x8,
    37, 0x8,
    50, 0x8,
    4, 0x2,
    4, 0x1,
    7, 0x1,
    7, 0x2,
    7, 0x4,
    8, 0x1,
    8, 0x2,
    8, 0x4,
    9, 0x1,
    9, 0x2,
    9, 0x4,
    10, 0x1,
    10, 0x2,
    10, 0x4,
    11, 0x1,
    11, 0x2,
    11, 0x4,
    20, 0x1,
    20, 0x2,
    20, 0x4,
    21, 0x1,
    21, 0x2,
    21, 0x4,
    22, 0x1,
    22, 0x2,
    22, 0x4,
    23, 0x1,
    23, 0x2,
    23, 0x4,
    24, 0x1,
    24, 0x2,
    24, 0x4,
    33, 0x1,
    33, 0x2,
    33, 0x4,
    34, 0x1,
    34, 0x2,
    34, 0x4,
    35, 0x1,
    35, 0x2,
    35, 0x4,
    36, 0x1,
    36, 0x2,
    36, 0x4,
    37, 0x1,
    37, 0x2,
    37, 0x4,
    46, 0x1,
    46, 0x2,
    46, 0x4,
    47, 0x1,
    47, 0x2,
    47, 0x4,
    48, 0x1,
    48, 0x2,
    48, 0x4,
    49, 0x1,
    49, 0x2,
    49, 0x4,
    50, 0x1,
    50, 0x2,
    50, 0x4,
    12, 0x1,
    12, 0x2,
    12, 0x4,
    13, 0x1,
    13, 0x2,
    13, 0x4,
    14, 0x1,
    14, 0x2,
    14, 0x4,
    15, 0x1,
    15, 0x2,
    15, 0x4,
    16, 0x1,
    16, 0x2,
    16, 0x4,
    25, 0x1,
    25, 0x2,
    25, 0x4,
    26, 0x1,
    26, 0x2,
    26, 0x4,
    27, 0x1,
    27, 0x2,
    27, 0x4,
    28, 0x1,
    28, 0x2,
    28, 0x4,
    29, 0x1,
    29, 0x2,
    29, 0x4,
    38, 0x1,
    38, 0x2,
    38, 0x4,
    39, 0x1,
    39, 0x2,
    39, 0x4,
    40, 0x1,
    40, 0x2,
    40, 0x4,
    41, 0x1,
    41, 0x2,
    41, 0x4,
    42, 0x1,
    42, 0x2,
    42, 0x4,
    51, 0x1,
    51, 0x2,
    51, 0x4,
    52, 0x1,
    52, 0x2,
    52, 0x4,
    53, 0x1,
    53, 0x2,
    53, 0x4,
    54, 0x1,
    54, 0x2,
    54, 0x4,
    55, 0x1,
    55, 0x2,
    55, 0x4,
    18, 0x1,
    44, 0x1
};
static Word16 order_MRDTX[] = {
    0, 0x4,
    0, 0x2,
    0, 0x1,
    1, 0x80,
    1, 0x40,
    1, 0x20,
    1, 0x10,
    1, 0x8,
    1, 0x4,
    1, 0x2,
    1, 0x1,
    2, 0x100,
    2, 0x80,
    2, 0x40,
    2, 0x20,
    2, 0x10,
    2, 0x8,
    2, 0x4,
    2, 0x2,
    2, 0x1,
    3, 0x100,
    3, 0x80,
    3, 0x40,
    3, 0x20,
    3, 0x10,
    3, 0x8,
    3, 0x4,
    3, 0x2,
    3, 0x1,
    4, 0x20,
    4, 0x10,
    4, 0x8,
    4, 0x4,
    4, 0x2,
    4, 0x1
};

/* Homing frames for the decoder */
static const Word16 dhf_MR475[PRMNO_MR475] = {
    0x00F8,
    0x009D,
    0x001C,
    0x0066,
    0x0000,
    0x0003,
    0x0028,
    0x000F,
    0x0038,
    0x0001,
    0x000F,
    0x0031,
    0x0002,
    0x0008,
    0x000F,
    0x0026,
    0x0003
};
static const Word16 dhf_MR515[PRMNO_MR515] = {
    0x00F8,
    0x009D,
    0x001C,
    0x0066,
    0x0000,
    0x0003,
    0x0037,
    0x000F,
    0x0000,
    0x0003,
    0x0005,
    0x000F,
    0x0037,
    0x0003,
    0x0037,
    0x000F,
    0x0023,
    0x0003,
    0x001F
};
static const Word16 dhf_MR59[PRMNO_MR59] = {
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0000,
    0x0003,
    0x0037,
    0x000F,
    0x0001,
    0x0003,
    0x000F,
    0x0060,
    0x00F9,
    0x0003,
    0x0037,
    0x000F,
    0x0000,
    0x0003,
    0x0037
};
static const Word16 dhf_MR67[PRMNO_MR67] = {
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0002,
    0x0007,
    0x0000,
    0x000F,
    0x0098,
    0x0007,
    0x0061,
    0x0060,
    0x05C5,
    0x0007,
    0x0000,
    0x000F,
    0x0318,
    0x0007,
    0x0000
};
static const Word16 dhf_MR74[PRMNO_MR74] = {
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0006,
    0x000F,
    0x0000,
    0x001B,
    0x0208,
    0x000F,
    0x0062,
    0x0060,
    0x1BA6,
    0x000F,
    0x0000,
    0x001B,
    0x0006,
    0x000F,
    0x0000
};
static const Word16 dhf_MR795[PRMNO_MR795] = {
    0x00C2,
    0x00E3,
    0x002F,
    0x00BD,
    0x0006,
    0x000F,
    0x000A,
    0x0000,
    0x0039,
    0x1C08,
    0x0007,
    0x000A,
    0x000B,
    0x0063,
    0x11A6,
    0x000F,
    0x0001,
    0x0000,
    0x0039,
    0x09A0,
    0x000F,
    0x0002,
    0x0001
};
static const Word16 dhf_MR102[PRMNO_MR102] = {
    0x00F8,
    0x00E3,
    0x002F,
    0x0045,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x001B,
    0x0000,
    0x0001,
    0x0000,
    0x0001,
    0x0326,
    0x00CE,
    0x007E,
    0x0051,
    0x0062,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x015A,
    0x0359,
    0x0076,
    0x0000,
    0x001B,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x017C,
    0x0215,
    0x0038,
    0x0030
};
static const Word16 dhf_MR122[PRMNO_MR122] = {
    0x0004,
    0x002A,
    0x00DB,
    0x0096,
    0x002A,
    0x0156,
    0x000B,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0036,
    0x000B,
    0x0000,
    0x000F,
    0x000E,
    0x000C,
    0x000D,
    0x0000,
    0x0001,
    0x0005,
    0x0007,
    0x0001,
    0x0008,
    0x0024,
    0x0000,
    0x0001,
    0x0000,
    0x0005,
    0x0006,
    0x0001,
    0x0002,
    0x0004,
    0x0007,
    0x0004,
    0x0002,
    0x0003,
    0x0036,
    0x000B,
    0x0000,
    0x0002,
    0x0004,
    0x0000,
    0x0003,
    0x0006,
    0x0001,
    0x0007,
    0x0006,
    0x0005,
    0x0000
};


/* parameter sizes (# of bits), one table per mode */
static const Word16 bitno_MR475[PRMNO_MR475] = {
    8, 8, 7,    /* LSP VQ          */
    8, 7, 2, 8, /* first subframe  */
    4, 7, 2,    /* second subframe */
    4, 7, 2, 8, /* third subframe  */
    4, 7, 2     /* fourth subframe */
};
static const Word16 bitno_MR515[PRMNO_MR515] = {
    8, 8, 7,    /* LSP VQ          */
    8, 7, 2, 6, /* first subframe  */
    4, 7, 2, 6, /* second subframe */
    4, 7, 2, 6, /* third subframe  */
    4, 7, 2, 6  /* fourth subframe */
};
static const Word16 bitno_MR59[PRMNO_MR59] = {
    8, 9, 9,    /* LSP VQ          */
    8, 9, 2, 6, /* first subframe  */
    4, 9, 2, 6, /* second subframe */
    8, 9, 2, 6, /* third subframe  */
    4, 9, 2, 6  /* fourth subframe */
};
static const Word16 bitno_MR67[PRMNO_MR67] = {
    8, 9, 9,       /* LSP VQ          */
    8, 11, 3, 7,   /* first subframe  */
    4, 11, 3, 7,   /* second subframe */
    8, 11, 3, 7,   /* third subframe  */
    4, 11, 3, 7    /* fourth subframe */
};
static const Word16 bitno_MR74[PRMNO_MR74] = {
    8, 9, 9,       /* LSP VQ          */
    8, 13, 4, 7,   /* first subframe  */
    5, 13, 4, 7,   /* second subframe */
    8, 13, 4, 7,   /* third subframe  */
    5, 13, 4, 7    /* fourth subframe */
};
static const Word16 bitno_MR795[PRMNO_MR795] = {
    9, 9, 9,          /* LSP VQ          */
    8, 13, 4, 4, 5,   /* first subframe  */
    6, 13, 4, 4, 5,   /* second subframe */
    8, 13, 4, 4, 5,   /* third subframe  */
    6, 13, 4, 4, 5    /* fourth subframe */
};
static const Word16 bitno_MR102[PRMNO_MR102] = {
    8, 9, 9,                      /* LSP VQ          */
    8, 1, 1, 1, 1, 10, 10, 7, 7,  /* first subframe  */
    5, 1, 1, 1, 1, 10, 10, 7, 7,  /* second subframe */
    8, 1, 1, 1, 1, 10, 10, 7, 7,  /* third subframe  */
    5, 1, 1, 1, 1, 10, 10, 7, 7   /* fourth subframe */
};
static const Word16 bitno_MR122[PRMNO_MR122] = {
    7, 8, 9, 8, 6,                            /* LSP VQ          */
    9, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 5,    /* first subframe  */
    6, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 5,    /* second subframe */
    9, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 5,    /* third subframe  */
    6, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 5     /* fourth subframe */
};
static const Word16 bitno_MRDTX[PRMNO_MRDTX] = {
    3, 8, 9, 9, 6
};

#ifdef ENABLE_CPU2_DECODER
CPU2_DATA_END
#endif

#endif
