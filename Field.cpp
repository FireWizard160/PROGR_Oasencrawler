
#include <cstdlib>
#include <iostream>
#include "Field.h"



FieldType Field::createFieldType() {
    int parameter = rand() % 100;

    if(parameter < 40){
        return empty;
    }

    if(parameter < 80){
        return danger;
    }

    if(parameter < 90){
        return relict;
    }

    if(parameter < 100){
        return spring;
    }
}




Field::Field() {

    
}
