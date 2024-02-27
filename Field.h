
#ifndef OASENCRAWLER_FIELD_H
#define OASENCRAWLER_FIELD_H

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

};


#endif //OASENCRAWLER_FIELD_H
