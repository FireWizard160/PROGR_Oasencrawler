//
// Created by Lukas on 04.03.2024.
//

#ifndef OASENCRAWLER_ENEMY_H
#define OASENCRAWLER_ENEMY_H


#include "Entity.h"

class Enemy : public Entity{
    public:
        Enemy();
        void enemyMove();
        int movementSpeed = 1;
        bool alive = true;

    private:

};


#endif //OASENCRAWLER_ENEMY_H
