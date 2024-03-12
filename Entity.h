//
// Created by Lukas on 04.03.2024.
//

#ifndef OASENCRAWLER_ENTITY_H
#define OASENCRAWLER_ENTITY_H

struct Vector {

    int x = 0;
    int y = 0;

};

class Entity {
public:
    void setPositon(int y, int x);


protected:
    Vector position;
    public:
    Entity() = default;
    virtual bool checkValidMove(Vector positon);
    Vector getPosition();
    void Move(Vector direction);

};


#endif //OASENCRAWLER_ENTITY_H
