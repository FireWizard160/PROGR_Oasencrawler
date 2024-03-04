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

            std::cout << "|";

            if(i == playerPosition.y && j == playerPosition.x){
                std::cout << "(";

            } else {
                std::cout << " ";
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

            if(i == playerPosition.y && j == playerPosition.x){
                std::cout << ")|";

            } else {
                std::cout << " |";
            }


        }
        std::cout << "\n";

        for (int j = 0; j < 5; ++j) {
            std::cout << " --- ";
        }
        std::cout<< "\n";
    }

    std::cout << "Remaining Relics: " << countRelics() << std::endl;

// print Playerstats

}

int Board::countRelics(){

    int countRelics = 0;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {

         if (board[i][j].fieldType == relict){
             countRelics++;
         }


        }
    }
    return countRelics;
}

bool Board::checkValidRelics(Board board) {

    if (countRelics() == 0){
        return false;
    } else {
        return true;
    }

}

Board Board::checkValidBoard(Board board){
    while (1){
        if (!checkValidRelics(board)){
            board = Board();
        } else {
            break;
        }
    }


    return board;
}

FieldType Board::getCurrentFieldType(Player player){
    return board[player.getPlayerPositionY()][player.getPlayerPositionX()].fieldType;
}

Board::Board() {
    createBoard();
}


