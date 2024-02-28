#include "player.h"

Player::Player(){
    _symbol = '\0';
}

Player::Player(char s){
    _symbol = s;
}

void Player::set_symbol(char s){
    _symbol = s;
}

char Player::get_symbol(){
    return _symbol;
}