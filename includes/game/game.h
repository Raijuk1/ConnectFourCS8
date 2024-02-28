#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "../player/player.h"

using std::cin, std::cout, std::vector, std::string;

class Game{
private:
    int x, y;
public:
    Game();
    Game(int x, int y);

    void setX(int x);
    void setY(int y);
    void getX();
    void getY();

    void check_move(int x, int y);
    void check_lrDiagonal(int x, int y);
    Player x, y;
    //board
public:
    Game();
    Game(Player x, Player y);

    void setX(Player x);
    void setY(Player y);
    void getX();
    void getY();

    //bool checkMove(Player x, Player y);
    void checkLrDiagonal(Player x, Player y);
    //void playerMove();
};

#endif /* GAME_H */
