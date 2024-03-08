//
// Created by Lukas on 22.02.2024.
//

#include <iostream>
#include "Player.h"

extern int level;

Player::Player() = default;



void Player::inputHandler() {
    char userInput;

    std::cin >> userInput;

    switch (userInput) {
        case 'w':
            Move(Vector(0, -1));
            break;

        case 's':
            Move(Vector(0,1));
            break;

        case 'a':
            Move(Vector(-1,0));
            break;

        case 'd':
            Move(Vector(1,0));
            break;



        default: std::cout << "Invalid Button: Press WASD to Move" << std::endl;
            break;
    }
}



void Player::setDefaultPlayerPostion() {
    position.x = 0;
    position.y = 0;
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

void Player::setPlayerCollectedRelics() {
    collectedRelics++;
}