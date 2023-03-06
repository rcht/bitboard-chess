#pragma once

#include <stdint.h>

#include "constants.h"

typedef uint64_t Bitboard;
typedef uint64_t ZobristHash;

typedef struct {
    int pieceList[SQUARE_COUNT];
    Bitboard bitboards[PIECE_TYPE_COUNT];

    int player;
    int over;
    int winner;

    ZobristHash key;
} Position;
