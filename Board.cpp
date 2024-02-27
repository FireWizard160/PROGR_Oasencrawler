//
// Created by Lukas on 22.02.2024.
//

#include <iostream>
#include "Board.h"
#include "Field.h"
#include "Player.h"

void Board::createBoard(){

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            board[i][j].fieldType = Field::createFieldType();
        }

    }

}



void Board::printBoard(Vector playerPosition){



    for (int j = 0; j < 5; ++j) {
        std::cout << " --- ";
    }
    std::cout<< "\n";

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {

            std::cout << "| ";

            if(i == playerPosition.x && j == playerPosition.y){
                std::cout << "P |";
                continue;
            }

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
    createBoard();
}


