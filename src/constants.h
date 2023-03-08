#pragma once

enum Piece {
    
    NONE, 

    WHITE_PAWN, WHITE_KNIGHT, 
    WHITE_BISHOP, WHITE_ROOK, 
    WHITE_QUEEN, WHITE_KING,

    BLACK_PAWN, BLACK_KNIGHT, 
    BLACK_BISHOP, BLACK_ROOK, 
    BLACK_QUEEN, BLACK_KING,

    PIECE_COUNT
};

enum PieceType {

    PIECE_PAWN, PIECE_KNIGHT, 
    PIECE_BISHOP, PIECE_ROOK, PIECE_QUEEN,
    PIECE_KING,

    PIECE_TYPE_COUNT
};

enum MoveType {
    QUIET, CAPTURE, PROMOTE, EN_PASSANT, CASTLING, CHECK, CHECKMATE
};

//Little Endian Rank-File Mapping
enum Square {
    A1, A2, A3, A4, A5, A6, A7, A8,
    B1, B2, B3, B4, B5, B6, B7, B8,
    C1, C2, C3, C4, C5, C6, C7, C8,
    D1, D2, D3, D4, D5, D6, D7, D8,
    E1, E2, E3, E4, E5, E6, E7, E8,
    F1, F2, F3, F4, F5, F6, F7, F8,
    G1, G2, G3, G4, G5, G6, G7, G8,
    H1, H2, H3, H4, H5, H6, H7, H8,

    SQUARE_COUNT
};

enum Rank {
    NONE, 
    
    Rank_1, Rank_2, Rank_3, Rank_4, Rank_5, Rank_6, Rank_7, Rank_8
};

enum File {
    NONE,

    A, B, C, D, E, F, G, H
};

enum Player {
    WHITE, BLACK, PLAYER_COUNT
};

enum Over {
    GAME_NOT_OVER, GAME_OVER
};
