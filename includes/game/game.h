#ifndef GAME_H
#define GAME_H
#include <iostream>

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
};

#endif /* GAME_H */
