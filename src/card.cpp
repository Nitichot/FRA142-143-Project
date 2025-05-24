
#include "card.h"

void card::choose_lotto()
{
    game->command() = "";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO(1)  |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO(2)  |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO(3)  |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO(4)  |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO(5)  |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                                                                 |\n";
}

void card::confirm_lotto(int choosed_number)
{
    game->command() = "";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                          |  LOTTO-" + std::to_string(choosed_number) + "   |                         |\n";
    std::cout << "|                          +------------+                         |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                            Confirm(C)                           |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";

    //สุ่มชุดเลขของผู้เล่น

    srand(time(0));

    int digi1 = rand() % 10;
    int digi2 = rand() % 10;
    int digi3 = rand() % 10;

    game->set_lotto_number("68" + std::to_string(digi1) + std::to_string(digi2) + std::to_string(digi3));
}
void card::open_lotto(int open_pos = 0)
{
    // เเปลงชุดเลขของผู้เล่นเป็น ชุดเลขที่ถูกปิดอยู่

    game->command() = "";
    std::string number_lotto = game->lotto_number();
    std::string display_number = "";
    if (open_pos > 0 && open_pos <= 3)
    {
        opened_pos[open_pos +1] = '1';
    }
    for (int i = 0; i < opened_pos.length(); i++)
    {
        if (opened_pos[i] == '1')
        {
            display_number += number_lotto[i];
        }
        else
        {
            display_number += "_";
        }
    }


    if (opened_pos == "11111")
    {
        //หน้าเเสดงเลขของผู้เล่นเปิดหมดเเล้ว
        std::cout << "|                                          PRIZE NUMBERS IS " + game->prize_number() + " |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                          +------------+                         |\n";
        std::cout << "|                          |    " + display_number + "   |                         |\n";
        std::cout << "|                          +------------+                         |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                         Check lotto !!(C)                       |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        opened_pos = "11000";
    }
    else
    {
        //หน้าเเสดงเลขของผู้เล่นบางหลัก
        std::cout << "|                                          PRIZE NUMBERS IS " + game->prize_number() + " |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                          +------------+                         |\n";
        std::cout << "|                          |    " + display_number + "   |                         |\n";
        std::cout << "|                          +------------+                         |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|          Select the position you want to open.(1-3)             |\n";
        std::cout << "|                                                                 |\n";
        std::cout << "|                          Open All(A)                            |\n";
        std::cout << "|                                                                 |\n";
    }
}