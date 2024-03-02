//
// Created by Lukas on 22.02.2024.
//

#include <iostream>
#include "Player.h"


Player::Player() {


}

Vector Player::getPlayerPosition() {
    return position;
}

int Player::getPlayerPositionX(){
    return position.x;
}

int Player::getPlayerPositionY(){
    return position.y;
}

Vector Player::setPlayerPosition(char userInput) {
    switch (userInput) {
        case 'w':
            if (checkValidMove(position.y - 1)){
                position.y--;
            } else {
                std::cout << "Invalid Move" << std::endl;
            }

            break;

        case 's':
            if (checkValidMove(position.y + 1)){
                position.y++;
            } else {
                std::cout << "Invalid Move" << std::endl;
            }
            break;

        case 'a':
            if (checkValidMove(position.x - 1)){
                position.x--;
            } else {
                std::cout << "Invalid Move" << std::endl;
            }
            break;

        case 'd':
            if (checkValidMove(position.x + 1)){
                position.x++;
            } else {
                std::cout << "Invalid Move" << std::endl;
            }
            break;

            default: std::cout << "Invalid Button" << std::endl;
            break;
    }
    return position;
}


bool Player::checkValidMove(int coordinate) {
    if (coordinate > 4 || coordinate < 0){
        return false;
    }
    return true;
}


void Player::printPlayerStats() {
    std::cout << "Collected Relics: " << collectedRelics << std::endl;
    std::cout << "Health: " << health << std::endl;

}

int Player::getPlayerHealth(){
    return health;
}

int Player::getPlayerCollectedRelics(){
    return collectedRelics;
}

int Player::setPlayerCollectedRelics() {
    collectedRelics++;
}