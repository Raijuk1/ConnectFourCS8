#include "game.h"

Game::Game(){}
Game::Game(int x, int y){}

void check_move(int x, int y){
    bool available = false;

    cout << "Place piece in which column : ";
    cin >> x;

    for (int i = y - 1; i >= 0; i--){
        if (board[i][x] == ' '){
            available = true;
            break;
        }
        if (!avaliable){
            cout << "Enter new column to place piece" << endl;
        }
    }

}
void check_lrDiagonal(int x, int y){}
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

