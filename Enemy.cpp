//
// Created by Lukas on 04.03.2024.
//

#include <cstdlib>
#include "Enemy.h"
Enemy::Enemy() {
    position = Vector{2, 2};
}

void Enemy::enemyMove(){


    int parameter = rand() % 100;

    if(parameter < 25){
        Move(Vector(0, -1));
    }else if(parameter < 50) {
        Move(Vector(0,1));
    }else if(parameter < 75){
        Move(Vector(-1,0));
    } else if(parameter < 100){
        Move(Vector(1,0));
    }

}
