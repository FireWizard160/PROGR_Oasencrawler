//
// Created by Lukas on 09.03.2024.
//

#include <cstdlib>
#include <iostream>
#include "Item.h"
#include "Player.h"
#include "Board.h"

Item::Item() {
createItemType();
}

void Item::createItemType(){


    int parameter = rand() % 100;


    int teleportChance = 20;
    int healthPotionChance = 40;
    int bigHealthPotionChance = 60;
    int skipLevelChance = 80;
    int killEnemyChance = 100;




    // Random Teleport
    if (parameter < teleportChance) {
        itemType = teleport;
        std::cout << "GOOD ITEM: Teleport (lets you Teleport to a Position)" << std::endl;
    }
        // Spring Replace To Death
    else if (parameter < healthPotionChance) {
        itemType = healthPotion;
        std::cout << "GOOD ITEM: Health Potion (restores 3 HP)" << std::endl;
    }
        // Empty Replace To Death
    else if (parameter < bigHealthPotionChance) {
        itemType = bigHealthPotion;
        std::cout << "GOOD ITEM: Big Health Potion (restore 5 HP)" << std::endl;
    }
        // Enemy Walking Speed Increase
    else if (parameter < skipLevelChance) {
        std::cout << "GOOD ITEM: Skip Level" << std::endl;
        itemType = skipLevel;
    }
        // Increase Damage Chance
    else if (parameter < killEnemyChance) {
        std::cout << "GOOD ITEM: Kill Enemy" << std::endl;
        itemType = killEnemy;
    }



}

 void Item::itemTypeToString (enum ItemType itemType){
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