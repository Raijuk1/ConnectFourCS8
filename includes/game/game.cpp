#include "game.h"

Game::Game()
{
    letsPlay();
}

void Game::letsPlay(){
    int move = 0;
    char p1Symbol, p2Symbol;
    int rowSize, columnSize;

    cout << "Win condition : ";
    cin >> winCon;

    rowSize = winCon * 1.5;
    columnSize = rowSize + 1;

    cout << "Player one input your symbol : ";
    cin >> p1Symbol;
    p1.set_symbol(p1Symbol);

    cout << "Player two input your symbol : ";
    cin >> p2Symbol;
    p2.set_symbol(p2Symbol);
    cout << endl << endl;

    board = Board(rowSize, columnSize);

    bool win = false;
    int currentIndex = 0;

    players[0] = p1;
    players[1] = p2;

    while(!win && !checkDraw())
    {
        int row;
        board.printBoard();
        cout << endl << endl;
        cout << "Player" << currentIndex + 1 << " Which column to place piece : ";
        cin >> move;
        while(!isMoveValid(move))
        {
            cout << "Invalid move.\n";
            cout << "Which column to put piece : ";
            cin >> move;
        }
        board.addSymbolToBoard(row, move, players[currentIndex].get_symbol());
        if(checkWin(row, move, players[currentIndex].get_symbol()))
        {
            board.printBoard();
            cout << endl;
            cout << "Player" << currentIndex + 1 << " wins!\n\n";
            win = true;

        }
        else
        {
            nextPlayerTurn(currentIndex);
        }
    }
    board.printBoard();
    cout << endl;
    cout << "Game is a Draw!" << endl;
}

void Game::nextPlayerTurn(int& currentIndex)
{
   if(currentIndex == 1)
   {
       currentIndex = 0;
   }
   else
   {
       currentIndex++;
   }
}

bool Game::isMoveValid(int column)
{
    return board.getBoard()[0][column] == ' ';
    // return board.symbolAtPosition(0,column) == ' ';
}

bool Game::checkRlDiagonal(int row, int column, char playerSym)
{
    int symInRows = 0;
    int rowStart = row;
    int columnStart = column;
    int rowEnd = board.getRows();
    int columnEnd = board.getColumns();

    while(rowStart != 0 && columnStart != columnEnd)
    {
        columnStart++;
        rowStart--;
    }
    while(rowStart != rowEnd && columnStart != -1)
    {
        if(board.symbolAtPosition(rowStart, columnStart) == playerSym)
        {
           symInRows++;
           if(symInRows == winCon) {
               return true;
           }
        }
        else
        {
            symInRows = 0;
        }
        columnStart--;
        rowStart++;
    }
    return false;
}

bool Game::checkLrDiagonal(int row, int column, char playerSym)
{
    int symInRows = 0;
    int rowStart = row;
    int columnStart = column;
    int rowEnd = board.getRows();
    int columnEnd = board.getColumns();

    while(rowStart != 0 && columnStart != 0)
    {
        columnStart--;
        rowStart--;
    }
    while(rowStart != rowEnd && columnStart != columnEnd)
    {
        if(board.symbolAtPosition(rowStart, columnStart) == playerSym)
        {
            symInRows++;
            if(symInRows == winCon) {
                return true;
            }
        }
        else
        {
            symInRows = 0;
        }
        columnStart++;
        rowStart++;
    }
    return false;
}

bool Game::checkHorizontal(int row, int column, char playerSym)
{
    int columnSize = board.getColumns();
    int symInRows = 0;  //symInRows: how many symbols in a row

    for(int i = 0; i < columnSize; i++)
    {
        if(board.symbolAtPosition(row,i) == playerSym)
        {
            symInRows++;
            if(symInRows == winCon)
            {
                return true;
            }
        }
        else
        {
            symInRows = 0;
        }
    }
    return false;
}

bool Game::checkVertical(int row, int column, char playerSym)
{
    int rowSize = board.getRows();
    int symInRows = 0;

    for(int i = 0; i < rowSize; i++)
    {
        if(board.symbolAtPosition(i, column) == playerSym)
        {
            symInRows++;
            if(symInRows == winCon)
            {
                return true;
            }
        }
        else
        {
            symInRows = 0;
        }
    }
    return false;
}

bool Game::checkWin(int row, int column, char playerSym)
{
    return(checkLrDiagonal(row, column, playerSym) ||
           checkRlDiagonal(row, column, playerSym) ||
           checkHorizontal(row, column, playerSym) ||
           checkVertical(row, column, playerSym));
}

bool Game::checkDraw()
{
    int columnSize = board.getColumns();

    for(int i = 0; i < columnSize; i++)
    {
        if(board.symbolAtPosition(0, i) == ' ')
        {
            return false;
        }
    }
    return true;
}