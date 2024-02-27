

#include <ctime>
#include <cstdlib>
#include "Board.h"

int main(){
    srand(static_cast<unsigned>(time(nullptr)));
    Board board = Board();

    board.printBoard();




}