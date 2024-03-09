//
// Created by Lukas on 08.03.2024.
//

#include <cstdlib>
#include <iostream>

#include "Event.h"
#include "Player.h"
#include "Board.h"
#include "Enemy.h"

#define BOARDSIZE 5

#define RANDOM_TELEPORT_CHANCE 25
#define SPRING_REPLACE_TO_DEATH_CHANCE 50
#define EMPTY_REPLACE_TO_DEATH_CHANCE 75
#define ENEMY_WALKING_SPEED_INCREASE_CHANCE 100

extern int enemyMovementSpeed;

void Event::Execute(Player& player, Board& board, Enemy& enemy) {

    int parameter = rand() % 100;



    // Random Teleport
    if (parameter < RANDOM_TELEPORT_CHANCE) {
        executeRandomTeleport(player);
    }
        // Spring Replace To Death
    else if (parameter < SPRING_REPLACE_TO_DEATH_CHANCE) {
        executeSpringReplaceToDeath(board);
    }
        // Empty Replace To Death
    else if (parameter < EMPTY_REPLACE_TO_DEATH_CHANCE) {
        executeEmptyReplaceToDeath(board);
    }
        // Enemy Walking Speed Increase
    else if (parameter < ENEMY_WALKING_SPEED_INCREASE_CHANCE) {
        executeEnemyWalkingSpeedIncrease(enemy);
    }

}

void Event::executeRandomTeleport(Player &player){

    int newX = rand() % 5;
    int newY = rand() % 5;

    player.setPositon(newY,newX);
    std::cout << "BAD: You got teleported random" << std::endl;
}

void Event::executeSpringReplaceToDeath(Board &board){

    for (int i = 0; i < BOARDSIZE; ++i) {
        for (int j = 0; j < BOARDSIZE; ++j) {
            if(board.board[i][j].fieldType == spring){
                board.board[i][j].fieldType = danger;
            }
        }
    }
    std::cout << "BAD: All Spring Fields were replaced with Danger Fields" << std::endl;
}

void Event::executeEmptyReplaceToDeath(Board &board){
    for (int i = 0; i < BOARDSIZE; ++i) {
        for (int j = 0; j < BOARDSIZE; ++j) {
            if(board.board[i][j].fieldType == empty){
                board.board[i][j].fieldType = danger;
            }
        }
    }
    std::cout << "BAD: All Empty Fields were replaced with Danger Fields" << std::endl;
}

void Event::executeEnemyWalkingSpeedIncrease(Enemy &enemy){
    enemyMovementSpeed++;
    std::cout << "BAD: The Enemy can now move faster" << std::endl;
}
