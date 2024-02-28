#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "../player/player.h"

using std::cin, std::cout, std::vector, std::string;

class Game{
private:
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
