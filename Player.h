//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_PLAYER_H
#define OASENCRAWLER_PLAYER_H

#include "Entity.h"
#include "Item.h"
#include "Enemy.h"




class Player: public Entity{

    private:



    public:
        Player();

        Item inventory[5] = {};
        int totalItemsInInventory = 0;
        Vector getPlayerPosition();

        void inputHandler(Enemy& enemy);
        void printPlayerStats();
        int getPlayerHealth();
        int getPlayerCollectedRelics();
        int health = 5;
        void setPlayerCollectedRelics();
        int collectedRelics = 0;
        int level = 1;
        void setDefaultPlayerPostion();
        void useItem(ItemType itemType, Enemy& enemy);







};


#endif //OASENCRAWLER_PLAYER_H
