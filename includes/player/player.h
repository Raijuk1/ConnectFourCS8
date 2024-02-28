#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using std::cin, std::cout, std::vector, std::string;

class Player{
    public:
        Player();
        Player(char s);
        void set_symbol(char s);
        char get_symbol();
    private:
        char _symbol;
};

#endif /* PLAYER_H */
