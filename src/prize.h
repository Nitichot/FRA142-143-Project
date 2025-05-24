#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "game_display.h"

class prize : public game_display
{
    //class เกี่ยวกับรางวัลเเละเลขรางวัล
public:
    game_display *game;
    prize(game_display *game) : game(game) {} // construtor ที่ประกาศรับ pointer ของ game
    void random_prize_number(); // หน้าสุ่มเลขที่ถูกรางวัล
    void prize_display(); // หน้าเเสดงเลขที่ถูกรางวัล
    void awards_received(); //หน้าเเสดงผลรางวัลที่ได้รับ
};