//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_PLAYER_H
#define OASENCRAWLER_PLAYER_H

#include "Entity.h"



class Player: public Entity{

    private:



    public:
        Player();


        Vector getPlayerPosition();

        void inputHandler();
        void printPlayerStats();
        int getPlayerHealth();
        int getPlayerCollectedRelics();
        int health = 5;
        void setPlayerCollectedRelics();
        int collectedRelics = 0;
        int level = 1;
        void setDefaultPlayerPostion();







};


#endif //OASENCRAWLER_PLAYER_H
