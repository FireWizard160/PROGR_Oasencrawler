//
// Created by Lukas on 04.03.2024.
//

#include "Entity.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

bool Entity::checkValidMove(Vector position) {
    if(position.x < 0 || position.y < 0 || position.y > 4 || position.x > 4) {
        return false;
    }

    return true;
}

bool Entity::Move(Vector direction) {

    Vector newPosition = Vector{position.x + direction.x, position.y + direction.y};

    if(!checkValidMove(newPosition)){

        return false;
    }


    position = newPosition;
    return true;
}

Vector Entity::getPosition() {
    return position;
}

void Entity::setPositon(int y, int x) {
    position.y = y;
    position.x = x;
}
