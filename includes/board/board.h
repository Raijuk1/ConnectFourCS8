#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

class Board {
    public:
        Board();
        Board(int r, int c);
        vector < vector<char> > getBoard() const;
        void printBoard() const;
        void addSymbolToBoard(int& row, int column, char sym);
        char symbolAtPosition(int row, int column);
        
    private:
        vector< vector<char> > board;
        int rows;
        int columns;
};

#endif /* BOARD_H */
