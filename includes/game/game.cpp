#include "game.h"

Game::Game(){}
Game::Game(Player x, Player y){}

void playerMove(){
    int move;

    cout << "Which column to put piece : ";
    cin >> move;

    checkMove(move);
}

bool checkMove(int c){
    return board[0][c] == ' ';
}

void checkLrDiagonal(Player x, Player y){}

