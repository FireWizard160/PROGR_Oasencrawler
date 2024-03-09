//
// Created by Lukas on 09.03.2024.
//

#include <cstdlib>
#include <iostream>
#include "Item.h"
#include "Player.h"
#include "Board.h"

Item::Item() {


}

itemType createItemType(){


    int parameter = rand() % 100;


    int teleportChance = 20;
    int healthPotionChance = 40;
    int bigHealthPotionChance = 60;
    int skipLevelChance = 80;
    int killEnemyChance = 100;




    // Random Teleport
    if (parameter < teleportChance) {
        return teleport;
    }
        // Spring Replace To Death
    else if (parameter < healthPotionChance) {
        return healthPotion;
    }
        // Empty Replace To Death
    else if (parameter < bigHealthPotionChance) {
        return bigHealthPotion;
    }
        // Enemy Walking Speed Increase
    else if (parameter < skipLevelChance) {
        return skipLevel;
    }
        // Increase Damage Chance
    else if (parameter < killEnemyChance) {
        return killEnemy;
    }



}

 void Item::enumToString (enum itemType itemType){
    switch (itemType) {
        case teleport:
            std::cout << "Teleport (lets you Teleport to a Position)" << std::endl;
            break;
        case healthPotion:
            std::cout << "Health Potion (restores 3 HP)" << std::endl;
            break;
        case bigHealthPotion:
            std::cout << "Big Health Potion (restore 5 HP)" << std::endl;

            break;
        case skipLevel:
            std::cout << "Skip Level" << std::endl;

            break;
        case killEnemy:
            std::cout << "Kill Enemy" << std::endl;
            break;
    }
}