#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "game_display.cpp"
#include "game_default.cpp"
#include "card.cpp"
#include "prize.cpp"

class Lotto_game
{
    // class game
public:
    Lotto_game(); 
    game_display game; //ประกาศ class game_display
    card card1; //ประกาศ class card
    prize prize1; //ประกาศ class prize
    game_default game_def; //ประกาศ class game_default
    void run(); //run program ทั้งหมด
};
