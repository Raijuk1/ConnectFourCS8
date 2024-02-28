#include "board.h"

Board::Board()
{
    rows = 6;
    columns = 7;
    board = vector< vector<char> >(6, vector<char>(7, ' '));
}

Board::Board(int r, int c) 
{
    rows = r;
    columns = c;
    board = vector< vector<char> >(rows, vector<char>(columns, ' '));
}

vector < vector<char> > Board::getBoard() const
{
    return board;
}

void Board::printBoard() const
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++)
        {
            cout << " | ";
            cout << board[i][j];
        }
        cout << " | ";
        cout << endl;
    }
}

void Board::addSymbolToBoard(int& row, int column, char sym)
{
    for (int i = rows - 1; i >= 0; i--)
    {
        if (board[i][column] == ' ')
        {
            board[i][column] = sym;
            row = i;
            return;
        }
    }
}

char Board::symbolAtPosition(int row, int column)
{
    return board[row][column];
}