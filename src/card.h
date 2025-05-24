#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "game_display.h"

class card : public game_display
{
    // class เกี่ยวกับชุดเลขของผู้เล่น
private:
    std::string opened_pos = "11000"; //ตำเเหน่งที่ต้องการเปิด
public:
    game_display *game;
    card(game_display *game) : game(game) {} // construtor ที่ประกาศรับ pointer ของ game
    void choose_lotto(); //หน้าเลือกชุดตัวเลข
    void open_lotto(int open_pos); //หน้าเปิดเลขของผู้เล่น
    void confirm_lotto(int choosed_number);  //หน้ายืนยันชุดตัวเลข
    void set_opened_pos(std::string p){ opened_pos = p;} //กำหนดตำเเหน่งที่ต้องการเปิด
};