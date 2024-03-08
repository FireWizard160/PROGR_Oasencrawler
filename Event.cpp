//
// Created by Lukas on 08.03.2024.
//

#include <cstdlib>
#include "Event.h"


eventType Event::createEventType() {

    int parameter = rand() % 100;

    int teleportChance = 10;
    int healthPotionChance = 20;
    int randomTeleportChance = 30;
    int springReplaceToDeathChance = 40;
    int emptyReplaceToDeathChance = 50;
    int enemyWalkingSpeedIncreaseChance = 60;
    int skipLevelChance = 70;
    int killEnemyChance = 80;
    int increaseDamageChance = 90;
    int bigHealthPotionChance = 100;

    // Teleport
    if (parameter < teleportChance) {
        return teleport;
    }
        // Health Potion
    else if (parameter < healthPotionChance) {
        return healthPotion;
    }
        // Random Teleport
    else if (parameter < randomTeleportChance) {
        return randomTeleport;
    }
        // Spring Replace To Death
    else if (parameter < springReplaceToDeathChance) {
        return springReplaceToDeath;
    }
        // Empty Replace To Death
    else if (parameter < emptyReplaceToDeathChance) {
        return  emptyReplaceToDeath;
    }
        // Enemy Walking Speed Increase
    else if (parameter < enemyWalkingSpeedIncreaseChance) {
        return enemyWalkingSpeedIncrease;
    }
        // Skip Level
    else if (parameter < skipLevelChance) {
       return skipLevel;
    }
        // Kill Enemy
    else if (parameter < killEnemyChance) {
      return killEnemy;
    }
        // Increase Damage Chance
    else if (parameter < increaseDamageChance) {
       return increaseDamageFieldChance;
    }
        // Big Health Potion
    else {
       return bigHealthPotion;
    }
}



Event::Event() {
    createEventType();
}
