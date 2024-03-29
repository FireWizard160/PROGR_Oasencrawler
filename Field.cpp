
#include <cstdlib>
#include <iostream>

#include "Field.h"


extern int level;


FieldType Field::createFieldType() {
    int parameter = rand() % 100;

    int relicFieldChance =  20+(level*3);
    int springFieldChance = 50-(level*3);
    int emptyFieldChance = 80-(level*3);
    int eventFieldChance = 5;
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
        eventFieldChance = 3;
    }

    if(parameter < eventFieldChance){
        return event;
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




