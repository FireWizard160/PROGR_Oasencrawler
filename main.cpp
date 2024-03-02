



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

    board.printBoard(player.getPlayerPosition());
    player.printPlayerStats();

    char userInput;
    while(1){

        std::cin >> userInput;

        if (userInput == 'x'){
            return 0;
        }

        player.setPlayerPosition(userInput);

        board.getCurrentFieldType(player);
        board.printBoard(player.getPlayerPosition());
        player.printPlayerStats();

    }








}