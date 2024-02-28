#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "../player/player.h"
#include "../board/board.h"

using std::cin, std::cout, std::vector, std::string;

class Game{
private:
    Player p1, p2;
    Player players[];
    Board board;
    int winCon;
public:
    Game();

    void setP1(Player p1);
    void setP2(Player p2);
    void getP1();
    void getP2();

    void nextPlayerTurn();
    void letsPlay();
    bool checkWin(int row, int column, char playerSym);
    bool isMoveValid(int column);
    bool checkRlDiagonal(int row, int column, char playerSym);
    bool checkLrDiagonal(int row, int column, char playerSym);
    bool checkHorizontal(int row, char playerSym);
    bool checkVertical(int column, char playerSym);
    bool checkDraw();
};

#endif /* GAME_H */
