#pragma once
#include <iostream>
#include <vector>
#include <string>

class game_display{
    // ค่าเเสดงส่วนประกอบหน้าจอของเกม
    protected:
        int coin_ = 0; //เหรียญ
        std::string prize_number_ = ""; //ชุดเลขที่ถูกรางวัล
        std::string command_ = ""; //คำสั่งที่ผู้เล่นสั่ง
        std::string lotto_number_ = ""; //ชุดเลขของผู้เล่น
        std::string coin_str(){
            //เเปลงเหรียญ int เป็น เหรียญ string ที่มี 4 หลัก
            std::string c = std::to_string(coin_);
            if(c.length() < 4){
                std::string zero = "";
                for(int i=0;i<4-c.length();i++){
                    zero += "0";
                }
                return zero+c;
            }
            else{
                return c;
            }
        }
    public:
        void top_screen(); //ส่วนบนของหน้าเกม + เเสดงเหรียญ
        void bottom_screen(); //ส่วนล่างของหน้าเกม
        void input_action(); //รับคำสั่งจากผู้เล่น
        void error_action(); //คำสั่งจากผู้เล่นไม่ถูกต้อง
        void coin_notenough(); //หน้าเหรียญไ่พอสำหรับการเล่น
        std::string prize_number() {return prize_number_; } //ชุดเลขที่ถูกรางวัล
        std::string command() {return command_;} //คำสั่งที่ผู้เล่นสั่ง
        std::string lotto_number() {return lotto_number_;} //ชุดเลขของผู้เล่น
        int coin() {return coin_;} //เหรียญ

        void set_coin(int c){ // กำหนดเหรียญ
            coin_ = c;
        }        
        void set_command(std::string c){ // กำหนดคำสั่ง
            command_ = c;
        } 
        void set_lotto_number(std::string n){ // กำหนดชุดเลขของผู้เล่น
            lotto_number_ = n;
        }
        void set_prize_number(std::string p){ // กำหนดชุดเลขที่ถูกรางวัล
            prize_number_ = p;
        }
};