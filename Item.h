//
// Created by Lukas on 09.03.2024.
//

#ifndef OASENCRAWLER_ITEM_H
#define OASENCRAWLER_ITEM_H

enum itemType {
    teleport,
    healthPotion,
    bigHealthPotion,
    skipLevel,
    killEnemy,
};

class Item {
    public:
    Item();
    itemType itemType;
    enum itemType createItemType();
    static void enumToString (enum itemType);


};


#endif //OASENCRAWLER_ITEM_H
