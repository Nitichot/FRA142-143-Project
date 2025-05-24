#include "game_display.h"

void game_display::top_screen()
{
    std::cout << "+--------------------------------------------------------+--------+\n";
    std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
    std::cout << "+--------------------------------------------------------+--------+\n";
}
void game_display::bottom_screen()
{
    std::cout << "+-----------------------------------------------------------------+\n";
    std::cout << "|                             Quit(Q)                             |\n";
    std::cout << "+-----------------------------------------------------------------+\n";
}
void game_display::coin_notenough()
{
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                   +-------------------------+                   |\n";
    std::cout << "|                   | Not enough coin to play |                   |\n";
    std::cout << "|                   +-------------------------+                   |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                       |     Home(H)     |                       |\n";
    std::cout << "|                       +-----------------+                       |\n";
    std::cout << "|                                                                 |\n";
    std::cout << "|                                                                 |\n";
}
void game_display::input_action()
{
    std::cout << "Confirm action:";
    std::cin >> command_;
    // std::cout<<command_;
}
void game_display::error_action()
{
    std::cout << "Action error, please type again:";
    std::cin >> command_;
}
