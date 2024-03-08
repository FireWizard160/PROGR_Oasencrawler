//
// Created by Lukas on 08.03.2024.
//

#ifndef OASENCRAWLER_EVENT_H
#define OASENCRAWLER_EVENT_H

enum eventType {
    teleport,
    healthPotion,
    randomTeleport,
    springReplaceToDeath,
    emptyReplaceToDeath,
    enemyWalkingSpeedIncrease,
    skipLevel,
    killEnemy,
    increaseDamageFieldChance,
    bigHealthPotion,
};

class Event {


    public:
    Event();
    eventType eventType;
    enum eventType createEventType();

    private:
};


#endif //OASENCRAWLER_EVENT_H
