//
// Created by Lukas on 22.02.2024.
//

#ifndef OASENCRAWLER_PLAYER_H
#define OASENCRAWLER_PLAYER_H

struct Vector {

    int x = 0;
    int y = 0;

}typedef Vector;

class Player {

    private:
        struct Vector position;


    public:
        Player();


        Vector getPlayerPosition();
        Vector setPlayerPosition(char userInput);
        bool checkValidMove(int coordinate);
        int health = 5;





};


#endif //OASENCRAWLER_PLAYER_H
