



#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Board.h"
#include "Player.h"

int main(){
    srand(static_cast<unsigned>(time(nullptr)));
    Board board = Board();
    Player player = Player();

    char userInput;
    while(1){

        std::cin >> userInput;

        if (userInput == 'x'){
            return 0;
        }

        player.setPlayerPosition(userInput);
        board.printBoard(player.getPlayerPosition());
    }








}