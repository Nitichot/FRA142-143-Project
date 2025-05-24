#include "prize.h"

void prize::random_prize_number()
{
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                          Winning Numbers                        |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                             _ _ _ _ _                           |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                          Start random(R)                        |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";

    //สุ่มตัวเลข + กำหนด ชุดเลขที่ถูกรางวัล
    srand(time(0));

    int digi1 = rand() % 10;
    int digi2 = rand() % 10;
    int digi3 = rand() % 10;

    game->set_prize_number("68" + std::to_string(digi1) + std::to_string(digi2) + std::to_string(digi3));
}
void prize::prize_display()
{
    game->command() = "";
    std::string number_str = game->prize_number();
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                          Winning Numbers                        |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                             " + number_str.substr(0, 1) + " " + number_str.at(1) + " " + number_str.at(2) + " " + number_str.at(3) + " " + number_str.at(4) + "                           |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                          Random again(R)                        |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                            Comfirm(C)                           |\n";
    std::cout << "|                                                                 |\n";
}

void prize::awards_received()
{
    // ตรวจสอบจำนวนหลักที่ถูก
    int digit = 0;
    for (int i = 0; i < 3; i++)
    {
        if (game->lotto_number()[i + 2] == game->prize_number()[i + 2])
        {
            digit += 1;
        }
    }
    std::cout << "|                                          PRIZE NUMBERS IS " + game->prize_number() + " |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";

    // เเสดงรางวัลท่ได้
    switch (digit)
    {
    case 0:
        std::cout << "|           ----------------------------------------              |\n";
        std::cout << "|           !!!  Opppps You didn't got any coin. !!!              |\n";
        std::cout << "|           ----------------------------------------              |\n";
        break;
    case 1:
        std::cout << "|           ----------------------------------------              |\n";
        std::cout << "|           !!! You got 1 digit and got 10 coin. !!!              |\n";
        std::cout << "|           ----------------------------------------              |\n";
        game->set_coin(game->coin() + 10);
        break;
    case 2:
        std::cout << "|           ----------------------------------------              |\n";
        std::cout << "|           !!! You got 2 digits and got 30 coin.!!!              |\n";
        std::cout << "|           ----------------------------------------              |\n";
        game->set_coin(game->coin() + 30);
        break;
    case 3:
        std::cout << "|           ----------------------------------------              |\n";
        std::cout << "|           !!! You got 3 digits and got 50 coin.!!!              |\n";
        std::cout << "|           ----------------------------------------              |\n";
        game->set_coin(game->coin() + 50);
        break;
    }
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                   +----------------------+                      |\n";
    std::cout << "|                   |        Home(H)       |                      |\n";
    std::cout << "|                   +----------------------+                      |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
}