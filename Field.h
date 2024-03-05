
#ifndef OASENCRAWLER_FIELD_H
#define OASENCRAWLER_FIELD_H

#include "Player.h"


enum FieldType {
    empty  ,
    danger ,
    relict ,
    spring ,
    item,

};

class Field {
public:
    Field();

    FieldType fieldType;

    static FieldType createFieldType();



};


#endif //OASENCRAWLER_FIELD_H
