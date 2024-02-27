

#include <ctime>
#include <cstdlib>
#include "Board.h"
#include "Player.h"

int main(){
    srand(static_cast<unsigned>(time(nullptr)));
    Board board = Board();
    Player player = Player();


    board.printBoard(player.getPlayerPosition());





}