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
        void printBoard(Vector playerPosition);
        int countRelics();
        bool checkValidRelics(Board);
        Board checkValidBoard(Board);
        FieldType getCurrentFieldType(Player);

};


#endif //OASENCRAWLER_BOARD_H
