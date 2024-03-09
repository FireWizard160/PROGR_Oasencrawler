//
// Created by Lukas on 09.03.2024.
//

#ifndef OASENCRAWLER_ITEM_H
#define OASENCRAWLER_ITEM_H

enum ItemType {
    teleport,
    healthPotion,
    bigHealthPotion,
    skipLevel,
    killEnemy,
};

class Item {
    public:
    Item();
    ItemType itemType;
    void createItemType();
    static void itemTypeToString (enum ItemType);


};


#endif //OASENCRAWLER_ITEM_H
