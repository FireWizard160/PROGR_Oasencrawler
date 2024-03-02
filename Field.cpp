
#include <cstdlib>
#include <iostream>
#include "Field.h"
#include "Player.h"
#include "Board.h"


FieldType Field::createFieldType() {
    int parameter = rand() % 100;

    if(parameter < 40){
        return empty;
    }

    if(parameter < 80){
        return danger;
    }

    if(parameter < 90){
        return relict;
    }

    if(parameter < 100){
        return spring;
    }
}


void Field::fieldActions(Field board[5][5], Player player){
    switch (board[player.getPlayerPositionX()][player.getPlayerPositionY()].fieldType) {

        case empty:{
            break;
        }
        case danger:{
            executeDanger();
            break;
        }
        case relict:{
            executeRelic();
            break;
        }
        case spring:{
            executeRelic();
            break;
        }

    }

}

void Field::executeRelic(Player player,Field board[5][5]) {
    board[player.getPlayerPositionX()][player.getPlayerPositionY()].fieldType = empty;
    player.setPlayerCollectedRelics();






}

void Field::executeDanger(Player player) {
    int parameter = rand() % 100;

    if(parameter <= 20){
        player.health--;
    }
}

void Field::executeSpring(Player player) {
    player.health++;
}
