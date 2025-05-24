// void game_display::start()
// {
//     // หน้าเริ่มต้น (ขาดเขียนอธิบายกฏ)
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                    |        Play(P)       |                     |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|   Game rules:                                                   |\n";
//     std::cout << "|   1.                                                            |\n";
//     std::cout << "|   2.                                                            |\n";
//     std::cout << "|   3.                                                            |\n";
//     std::cout << "|   4.                                                            |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";

//     std::cout << "Confirm action:";
//     std::cin >> command;
// }
// void game_display::Home()
// {
//     // หน้า Home สำหรับเมื่อจบรอบ
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                    |        Play(P)       |                     |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                    |     Game Rules(R)    |                     |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                    |  Winning Details(D)  |                     |\n";
//     std::cout << "|                    +----------------------+                     |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }

// void game_display::rules()
// {
//     // หน้าเริ่มต้น (ขาดเขียนอธิบายกฏ)
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|   Game rules:                                                   |\n";
//     std::cout << "|   1.                                                            |\n";
//     std::cout << "|   2.                                                            |\n";
//     std::cout << "|   3.                                                            |\n";
//     std::cout << "|   4.                                                            |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                       +-----------------+                       |\n";
//     std::cout << "|                       |     Home(H)     |                       |\n";
//     std::cout << "|                       +-----------------+                       |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";

//     std::cout << "Confirm action:";
//     std::cin >> command;
// }

// void game_display::awards_detail()
// {
//     // หน้าเริ่มต้น (ขาดเขียนอธิบายกฏ)
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|           Number Correct         |          Prize(coin)         |\n";
//     std::cout << "|                 1/3              |              10              |\n";
//     std::cout << "|                 2/3              |              30              |\n";
//     std::cout << "|                 3/3              |              50              |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                       +-----------------+                       |\n";
//     std::cout << "|                       |     Home(H)     |                       |\n";
//     std::cout << "|                       +-----------------+                       |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";

//     std::cout << "Confirm action:";
//     std::cin >> command;
// }

// void game_display::choose_lotto()
// {
//     // หน้าเลือก lotto
//     command = "";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO(1)  |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO(2)  |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO(3)  |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO(4)  |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO(5)  |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }
// void game_display::confirm_lotto(int choosed_number)
// {
//     // หน้า confirm lotto ที่เลือก
//     command = "";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                          |  LOTTO-" + std::to_string(choosed_number) + "   |                         |\n";
//     std::cout << "|                          +------------+                         |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                            Confirm(C)                           |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }

// void game_display::random_prize_number()
// {
//     command = "";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                          Winning Numbers                        |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                             _ _ _ _ _                           |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                          Start random(R)                        |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }

// void game_display::prize_number(int prize_number)
// {
//     command = "";
//     std::string number_str = std::to_string(prize_number);
//     std::string num_display = std::to_string(number_str[0]);
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                          Winning Numbers                        |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                             " + number_str.substr(0, 1) + " " + number_str.at(1) + " " + number_str.at(2) + " " + number_str.at(3) + " " + number_str.at(4) + "                           |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                          Random again(R)                        |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                            Comfirm(C)                           |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }
// void game_display::open_lotto(std::string open_pos)
// {
//     command = "";
//     std::string display_number = "";
//     for (int i = 0; i < open_pos.length(); i++)
//     {
//         if (open_pos[i] == '1')
//         {
//             display_number += lotto_number[i];
//         }
//         else
//         {
//             display_number += "_";
//         }
//     }
//     if (open_pos == "11111")
//     {
//         std::cout << "+--------------------------------------------------------+--------+\n";
//         std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//         std::cout << "+--------------------------------------------------------+--------+\n";
//         std::cout << "|                                          PRIZE NUMBERS IS " + prize + " |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                          +------------+                         |\n";
//         std::cout << "|                          |    " + display_number + "   |                         |\n";
//         std::cout << "|                          +------------+                         |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                         Check lotto !!(C)                       |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "+-----------------------------------------------------------------+\n";
//         std::cout << "|                             Quit(Q)                             |\n";
//         std::cout << "+-----------------------------------------------------------------+\n";
//         std::cout << "Confirm action:";
//         std::cin >> command;
//     }
//     else
//     {
//         std::cout << "+--------------------------------------------------------+--------+\n";
//         std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//         std::cout << "+--------------------------------------------------------+--------+\n";
//         std::cout << "|                                          PRIZE NUMBERS IS " + prize + " |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                          +------------+                         |\n";
//         std::cout << "|                          |    " + display_number + "   |                         |\n";
//         std::cout << "|                          +------------+                         |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|          Select the position you want to open.(1-3)             |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "|                          Open All(A)                            |\n";
//         std::cout << "|                                                                 |\n";
//         std::cout << "+-----------------------------------------------------------------+\n";
//         std::cout << "|                             Quit(Q)                             |\n";
//         std::cout << "+-----------------------------------------------------------------+\n";
//         std::cout << "Confirm action:";
//         std::cin >> command;
//     }
// }

// void game_display::awards_received(int digit)
// {
//     command = "";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                      LOTTO GAME                        |  " + coin_str() + "  |\n";
//     std::cout << "+--------------------------------------------------------+--------+\n";
//     std::cout << "|                                          PRIZE NUMBERS IS " + prize + " |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     switch (digit)
//     {
//     case 0:
//         std::cout << "|           ----------------------------------------              |\n";
//         std::cout << "|           !!!  Oupppp You didn't got any coin. !!!              |\n";
//         std::cout << "|           ----------------------------------------              |\n";
//         break;
//     case 1:
//         std::cout << "|           ----------------------------------------              |\n";
//         std::cout << "|           !!! You got 1 digit and got 10 coin. !!!              |\n";
//         std::cout << "|           ----------------------------------------              |\n";
//         break;
//     case 2:
//         std::cout << "|           ----------------------------------------              |\n";
//         std::cout << "|           !!! You got 2 digits and got 30 coin.!!!              |\n";
//         std::cout << "|           ----------------------------------------              |\n";
//         break;
//     case 3:
//         std::cout << "|           ----------------------------------------              |\n";
//         std::cout << "|           !!! You got 3 digits and got 50 coin.!!!              |\n";
//         std::cout << "|           ----------------------------------------              |\n";
//         break;
//     }
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                   +----------------------+                      |\n";
//     std::cout << "|                   |    Play again(P)     |                      |\n";
//     std::cout << "|                   +----------------------+                      |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "|                                                                 |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "|                             Quit(Q)                             |\n";
//     std::cout << "+-----------------------------------------------------------------+\n";
//     std::cout << "Confirm action:";
//     std::cin >> command;
// }
// // int main()
// // {
// //     game_display game;
// //     game.start();
// //     game.Home();
// //     game.rules();
// //     game.awards_detail();
// //     game.choose_lotto();
// //     game.confirm_lotto(2);
// //     game.random_prize_number();
// //     game.prize_number(67123);
// //     game.open_lotto("11111");
// //     game.open_lotto("11___");
// //     game.awards_received(2);
// // }