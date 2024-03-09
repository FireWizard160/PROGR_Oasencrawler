//
// Created by Lukas on 22.02.2024.
//

#include <iostream>
#include "Player.h"
#include <conio.h>
#include "Item.h"
#include "Enemy.h"


extern int level;
extern bool levelSkip;

Player::Player(){

}


void Player::inputHandler(Enemy &enemy) {
    char userInput;

    std::cin >> userInput;

    switch (userInput) {
        case 'w':
            Move(Vector(0, -1));
            break;

        case 's':
            Move(Vector(0, 1));
            break;

        case 'a':
            Move(Vector(-1, 0));
            break;

        case 'd':
            Move(Vector(1, 0));
            break;
        case 'i': {
            if (totalItemsInInventory == 0) {
                std::cout << "no items in inventory" << std::endl;
                break;
            }
            std::cout << "Press 1-" << totalItemsInInventory << " to chose item" << std::endl;

            int i = 0;

            for (i; i < totalItemsInInventory; ++i) {

                std::cout << i + 1 << ": ";
                Item::itemTypeToString(inventory[i].itemType);
                std::cout << std::endl;
            }
            int itemNumber;
            std::cin >> itemNumber;
            if (itemNumber > totalItemsInInventory){
                std::cout << "Invalid Option" << std::endl;
            }

            useItem(inventory[itemNumber - 1].itemType, enemy);
            totalItemsInInventory--;

            for (int j = itemNumber - 1; j < totalItemsInInventory; ++j) {
            inventory[j] = inventory[j+1];
            }

            break;


        }
        default:
            std::cout << "Invalid Button: Press WASD to Move or I to use an Item" << std::endl;


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

int Player::getPlayerHealth() {
    return health;
}

int Player::getPlayerCollectedRelics() {
    return collectedRelics;
}

void Player::setPlayerCollectedRelics() {
    collectedRelics++;
}

void Player::useItem(ItemType itemType, Enemy &enemy) {

    switch (itemType) {
        case teleport:
            while (1) {

                int x = 0;
                int y = 0;

                std::cout << "Enter X coordinate:";
                std::cin >> x;

                std::cout << "Enter Y coordinate:";
                std::cin >> y;

                if (x > 4 || y > 4 || x < 0 || y < 0) {
                    std::cout << "enter number between 0 and 4";
                    continue;
                }
                setPositon(y, x);
                break;
            }


            break;
        case healthPotion:
            health += + 3;
            break;
        case bigHealthPotion:
            health += 5;

            break;
        case skipLevel:
            levelSkip = true;

            break;
        case killEnemy:
            enemy.alive = false;
            break;


    }
};

