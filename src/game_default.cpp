
#include "game_default.h"

void game_default::Home()
{
    std::cout << "|                                                                 |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                    |        Play(P)       |                     |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                    |     Game Rules(R)    |                     |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                    |  Winning Details(D)  |                     |\n";
    std::cout << "|                    +----------------------+                     |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
}
void game_default::rules()
{
    std::cout << "|   Game rules:                                                   |\n";
    std::cout << "|   1.You will initially start with 100 coins in your inventory.  |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|   2.You can draw the result by pressing \"R\" and press \"C\" to    |\n";
    std::cout << "|     confirm the result.                                         |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|   3.You can purchase 1 Lotto out of 5. There're 20 coins each.  |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|   4.You can choose the digit to open by pressing the number of  |\n";
    std::cout << "|     digits you want or press \"A\" to open all.                   |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|   5.Matching digits will be rewarded with coins.  To continue,  |\n";
    std::cout << "|     press \"W\" for Home or \"P\" to play again.                    |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                       |     Home(H)     |                       |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                                                                 |\n";
}

void game_default::awards_detail()
{
    std::cout << "|                                                                 |\n";
    std::cout << "|           Number Correct         |          Prize(coin)         |\n";
    std::cout << "|                 1/3              |              10              |\n";
    std::cout << "|                 2/3              |              30              |\n";
    std::cout << "|                 3/3              |              50              |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                       |     Home(H)     |                       |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                                                                 |\n";
}