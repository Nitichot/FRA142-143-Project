#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "game_display.h"

class game_default : public game_display
{
    //class หน้าทั่วไป
public:
    game_display *game;
    game_default(game_display *game): game(game){} // construtor ที่ประกาศรับ pointer ของ game
    void start(); //หน้าเริ่มต้น
    void Home(); //หน้า home
    void rules(); //หน้ากฏ
    void awards_detail(); //หน้าตารางรางวัล
};