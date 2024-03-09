


#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Board.h"
#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include "Event.h"
#define BOARDSIZE 5
int level = 1;
int enemyMovementSpeed = 1;
bool levelSkip = false;

int main(){
    Player player = Player();
    srand(static_cast<unsigned>(time(nullptr)));
    int damageChance = 0;
    while (1) {


        Board board = Board();
        Enemy enemy = Enemy();


        board.board[player.getPosition().y][player.getPosition().x].fieldType = empty;
        board.ValidateBoard();

        std::cout << "Level: " << level << std::endl;
        board.printBoard(player.getPosition(), enemy.getPosition());
        player.printPlayerStats();


        while (1) {


            player.inputHandler(enemy);

            switch (board.getCurrentFieldType(player)) {
                case empty: {
                    break;
                }
                case danger: {
                    int parameter = rand() % 100;
                    if (parameter <= damageChance) {
                        player.health--;
                    }
                    break;
                }
                case relict: {
                    board.board[player.getPosition().y][player.getPosition().x].fieldType = empty;
                    player.setPlayerCollectedRelics();
                    break;
                }
                case spring: {
                    board.board[player.getPosition().y][player.getPosition().x].fieldType = empty;
                    player.health++;

                    break;
                }

                case event: {
                    int parameter = rand() % 2;


                    if (parameter){
                        Event::Execute(player, board, enemy);
                    } else {

                        if (player.totalItemsInInventory + 1 < 5){
                            player.inventory[player.totalItemsInInventory] = Item();
                        } else {
                            std::cout << "max items reached" << std::endl;
                        }
                    player.totalItemsInInventory++;
                    }
                    board.board[player.getPosition().y][player.getPosition().x].fieldType = empty;
                    break;
                }

            }

            if (enemy.alive == true){
                for (int i = 0; i < enemyMovementSpeed; ++i) {
                    enemy.enemyMove();
                }
            } else {
                board.board[enemy.getPosition().y][enemy.getPosition().x].fieldType = empty;
            }



            std::cout << "Level: " << level << std::endl;
            board.printBoard(player.getPosition(), enemy.getPosition());
            player.printPlayerStats();

            if (player.getPosition().y == enemy.getPosition().y && player.getPosition().x == enemy.getPosition().x) {
                std::cout << "The enemy got you! YOU LOSE!!" << std::endl;
                return 0;
            }

            if (board.countRelics() == 0 || levelSkip) {
                std::cout << "All Relics Found! Next Level!!" << std::endl;
                player.setDefaultPlayerPostion();
                level++;
                player.collectedRelics = 0;
                levelSkip = false;
                break;
            }

            if (player.health == 0) {
                std::cout << "All Lifes lost! YOU LOSE!!" << std::endl;
                return 0;
            }
        }
    }
}