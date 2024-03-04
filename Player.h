//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_PLAYER_H
#define OASENCRAWLER_PLAYER_H

#include "Entity.h"

struct Vector {

    int x = 0;
    int y = 0;

}typedef Vector;

class Player: public Entity{

    private:
        struct Vector position;


    public:
        Player();


        Vector getPlayerPosition();
        Vector setPlayerPosition(char userInput);
        bool checkValidMove(int coordinate);
        void printPlayerStats();
        int getPlayerHealth();
        int getPlayerCollectedRelics();
        int health = 5;
        void setPlayerCollectedRelics();
        int collectedRelics = 0;
        int getPlayerPositionX();
        int getPlayerPositionY();






};


#endif //OASENCRAWLER_PLAYER_H
