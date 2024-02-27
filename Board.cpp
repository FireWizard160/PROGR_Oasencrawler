//
// Created by Lukas on 22.02.2024.
//

#include <iostream>
#include "Board.h"


//void Board::createBoard(){}

void Board::printBoard(){


    for (int j = 0; j < 5; ++j) {
        std::cout << " --- ";
    }
    std::cout<< "\n";

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {

            std::cout << "| ";

            switch (board[i][j].fieldType) {
                case empty:{
                    std::cout << "e";
                    break;
                }
                case danger:{
                    std::cout << "d";
                    break;
                }
                case relict:{
                    std::cout << "r";
                    break;
                }
                case spring:{
                    std::cout << "s";
                    break;
                }

            }
            
            std::cout << " |";
        }
        std::cout << "\n";

        for (int j = 0; j < 5; ++j) {
            std::cout << " --- ";
        }
        std::cout<< "\n";
    }



}

Board::Board() {

}
