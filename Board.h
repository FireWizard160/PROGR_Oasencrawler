//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_BOARD_H
#define OASENCRAWLER_BOARD_H
#include "Field.h"
#include "Player.h"


class Board {
    public:
        Board();
        Field board[5][5];
        void createBoard();
        void printBoard(Vector playerPosition, Vector enemyPosition);
        int countRelics();
        bool checkValidRelics();
        void ValidateBoard();
        FieldType getCurrentFieldType(Player);
        int level = 1;

};


#endif //OASENCRAWLER_BOARD_H
