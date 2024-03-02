
#ifndef OASENCRAWLER_FIELD_H
#define OASENCRAWLER_FIELD_H

#include "Player.h"
#include "Board.h"

enum FieldType {
    empty  ,
    danger ,
    relict ,
    spring ,

};

class Field {
public:
    Field();

    FieldType fieldType;

    static FieldType createFieldType();
    void fieldActions(Field board[5][5], Player player);
    void executeSpring(Player);
    void executeDanger(Player);
    void executeRelic(Player, FieldType[5][5]);

};


#endif //OASENCRAWLER_FIELD_H
