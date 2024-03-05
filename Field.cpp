
#include <cstdlib>
#include <iostream>

#include "Field.h"
#include "Player.h"
#include "Board.h"

extern int level;


FieldType Field::createFieldType() {
    int parameter = rand() % 100;

    int relicFieldChance =  20+(level*3);
    int springFieldChance = 50-(level*3);
    int emptyFieldChance = 80-(level*3);
    int itemFieldChance = 5;
    int dangerFieldChance = 100;

    if(level >= 5){
        emptyFieldChance = 0;
    }

    if(level >= 10){
        springFieldChance = 0;
    }

    if (level >= 15){
        relicFieldChance = 50;
        dangerFieldChance = 100;
        itemFieldChance = 0;
    }

    if(parameter < itemFieldChance){
        return item;
    }else if(parameter < relicFieldChance) {
        return relict;
    }else if(parameter < springFieldChance) {
        return spring;
    }else if(parameter < emptyFieldChance){
            return empty;
    } else if(parameter < dangerFieldChance){
        return danger;
    } else  {
        return danger;
    }
}

Field::Field() {
    createFieldType();
}




