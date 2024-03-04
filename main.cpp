



#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Board.h"
#include "Player.h"
#include "Field.h"

int main(){
    srand(static_cast<unsigned>(time(nullptr)));
    Board board = Board();
    board = board.checkValidBoard(board);



    Player player = Player();
    board.board[player.getPlayerPositionY()][player.getPlayerPositionX()].fieldType = empty;
    board.printBoard(player.getPlayerPosition());
    player.printPlayerStats();

    char userInput;

    while(1){

        std::cin >> userInput;

        if (userInput == 'x'){
            return 0;
        }

        player.setPlayerPosition(userInput);

        switch (board.getCurrentFieldType(player)) {
            case empty:{
                break;
            }
            case danger:{
                int parameter = rand() % 100;

                if(parameter <= 20){
                    player.health--;
                }
                break;
            }
            case relict:{
                board.board[player.getPlayerPositionY()][player.getPlayerPositionX()].fieldType = empty;
                player.setPlayerCollectedRelics();
                break;
            }
            case spring:{
                player.health++;
                break;
            }

        }


        board.printBoard(player.getPlayerPosition());
        player.printPlayerStats();

    }








}