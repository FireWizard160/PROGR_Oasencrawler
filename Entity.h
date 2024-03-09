//
// Created by Lukas on 04.03.2024.
//

#ifndef OASENCRAWLER_ENTITY_H
#define OASENCRAWLER_ENTITY_H

struct Vector {

    int x = 0;
    int y = 0;

     /*void operator+=(Vector vec) {
        x += vec.x;
        y += vec.y;
    }*/

};

class Entity {
public:
    void setPositon(int y, int x);


protected:
    Vector position;
    public:
    Entity() = default;
    bool checkValidMove(Vector positon);
    Vector getPosition();
    bool Move(Vector direction);

};


#endif //OASENCRAWLER_ENTITY_H
