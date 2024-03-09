//
// Created by Lukas on 08.03.2024.
//

#ifndef OASENCRAWLER_EVENT_H
#define OASENCRAWLER_EVENT_H

#include "Board.h"
#include "Enemy.h"

class Event {
    public:
    static void Execute(Player& player, Board& board, Enemy& enemy);

private:
    static void executeRandomTeleport(Player &);

    static void executeSpringReplaceToDeath(Board &);

    static void executeEmptyReplaceToDeath(Board &);

    static void executeEnemyWalkingSpeedIncrease(Enemy &);
};


#endif //OASENCRAWLER_EVENT_H
