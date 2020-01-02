#ifndef MATH_H
#define MATH_H

#include "asm/types.h"


INT16 DespRight(INT16 a, INT16 b);

#define U_LESS_THAN(A, B) ((A) - (B) & 0x8000u)

#define DISTANCE(A, B) (U_LESS_THAN(A, B) ? (B - A) : (A - B))

#define SET_BIT(N, POS)   N |=   1 << POS
#define UNSET_BIT(N, POS) N &= ~(1 << POS)
#define GET_BIT(N, POS)   (1 & DespRight(N, POS))

#define SET_BIT_MASK(N, MASK) N |= MASK
#define UNSET_BIT_MASK(N, MASK) N &= ~MASK
#define GET_BIT_MASK(N, MASK) (N & MASK)

#define MOD_2(a) ((a)&1)
#define MOD_4(a) ((a)&3)
#define MOD_8(a) ((a)&7)
#define MOD_32(a) ((a)&31)

#define MUL_16(a) ((a) << 4)
#define MUL_8(a) ((a) << 3)
#define MUL_4(a) ((a) << 2)
#define MUL_2(a) ((a) << 1)

#define DIV_16(a) ((a) >> 4)
#define DIV_8(a) ((a) >> 3)
#define DIV_4(a) ((a) >> 2)
#define DIV_2(a) ((a) >> 1)

typedef struct _Pos {
	UINT16 x;
	UINT16 y;
} Pos;

typedef struct _Vector2D
{
    BYTE x;
    BYTE y;
} Vector2D;

#endif