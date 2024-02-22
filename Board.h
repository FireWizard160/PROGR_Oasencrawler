//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_BOARD_H
#define OASENCRAWLER_BOARD_H
#include "Field.h"



class Board {
    public:
        Board();
        Field board[5][5];
       // createBoard();
        void printBoard();

};


#endif //OASENCRAWLER_BOARD_H
