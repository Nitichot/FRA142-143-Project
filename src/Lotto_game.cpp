#include "Lotto_game.h"

Lotto_game::Lotto_game()
    : card1(&game),
      prize1(&game),
      game_def(&game)
{
}

void Lotto_game::run()
{ // run program
    // set จำนวนเงิน 100 เหรียญ
    game_def.game->set_coin(100);

    while (true)
    {
        // หน้า Home
        game_def.game->top_screen();
        game_def.Home();
        game_def.bottom_screen();
        game_def.game->input_action();
        while (true)
        { // คำสั่งสำหรับเปลี่ยนหน้า
            if (game_def.game->command() == "Q" || game_def.game->command() == "q")
            { // ออกโปรเเกรม
                return;
            }
            else if (game_def.game->command() == "P" || game_def.game->command() == "p")
            { // เริ่มเล่นเกม
                if (game_def.game->coin() < 20)
                { // ตรวจสอบจำนวนเหรียญ
                    // หน้าจำนวนเหรียญไม่พอ
                    game_def.game->top_screen();
                    game_def.coin_notenough();
                    game_def.bottom_screen();
                    game_def.game->input_action();
                    while (true)
                    { // คำสั่งสำหรับเปลี่ยนหน้า
                        if (game_def.game->command() == "Q" || game_def.game->command() == "q")
                        { // ออกโปรเเกรม
                            return;
                        }
                        else if (game_def.game->command() == "H" || game_def.game->command() == "h")
                        { // กลับหน้า Home
                            break;
                        }
                        else
                        { // คำสั่ง Error
                            game_def.game->error_action();
                        }
                    }
                    break;
                }
                game_def.game->set_coin(game_def.game->coin() - 20);
                while (true)
                { // สุ่มตัวเลขที่ถูกรางวัล
                    prize1.game->top_screen();
                    prize1.random_prize_number();
                    prize1.bottom_screen();
                    prize1.game->input_action();

                    // คำสั่งสำหรับเปลี่ยนหน้า
                    if (prize1.game->command() == "Q" || prize1.game->command() == "q")
                    {
                        return;
                    }
                    else if (prize1.game->command() == "R" || prize1.game->command() == "r")
                    {
                        while (true)
                        {
                            // หน้าเสดงชุดเลขที่ถูกรางวัล
                            prize1.game->top_screen();
                            prize1.prize_display();
                            prize1.bottom_screen();
                            prize1.game->input_action();
                            if (prize1.game->command() == "Q" || prize1.game->command() == "q")
                            { // ออกโปรเเกรม
                                return;
                            }
                            else if (prize1.game->command() == "R" || prize1.game->command() == "r")
                            { // สุ่มอีกครั้ง
                                break;
                            }
                            else if (prize1.game->command() == "C" || prize1.game->command() == "c")
                            { // ยืนยันเลข
                                break;
                            }
                        }
                        if (prize1.game->command() == "C" || prize1.game->command() == "c")
                        { // ยืนยันชุดเลขที่ถูกรางวัล
                            break;
                        }
                    }
                    else
                    { // คำสั่ง Error
                        prize1.game->error_action();
                    }
                }
                // หน้าเลือกชุดตัวเลข
                card1.game->top_screen();
                card1.choose_lotto();
                card1.bottom_screen();
                card1.game->input_action();
                while (true)
                { // คำสั่งสำหรับเปลี่ยนหน้า
                    if (card1.game->command() == "Q" || card1.game->command() == "q")
                    { // ออกโปรเเกรม
                        return;
                    }
                    if (isdigit(card1.game->command()[0]))
                    {
                        // เลขที่เลือก
                        int choosed_number = stoi(card1.game->command());
                        if (choosed_number > 0 && choosed_number <= 5)
                        {
                            // หน้าเเสดงชุดเลขที่เลือก
                            card1.game->top_screen();
                            card1.confirm_lotto(choosed_number);
                            card1.bottom_screen();
                            card1.game->input_action();
                            while (true)
                            {
                                if (card1.game->command() == "Q" || card1.game->command() == "q")
                                { // ออกโปรเเกรม
                                    return;
                                }
                                else if (card1.game->command() == "C" || card1.game->command() == "c")
                                { // ยืนยันชุดเลขของผู้เล่น
                                    break;
                                }
                                else if (card1.game->command() == "abc")
                                {
                                    card1.game->set_lotto_number(card1.game->prize_number());
                                    card1.game->error_action();
                                }
                                else
                                { // คำสั่ง Error
                                    card1.game->error_action();
                                }
                            }
                            break;
                        }
                        else
                        { // คำสั่ง Error
                            game_def.game->error_action();
                        }
                    }
                    else
                    { // คำสั่ง Error
                        game_def.game->error_action();
                    }
                }
                card1.game->set_command("0");
                int open_pos = stoi(card1.game->command());
                while (true)
                { // หน้าเปิดเลข
                    card1.game->top_screen();
                    card1.open_lotto(open_pos);
                    card1.bottom_screen();
                    card1.game->input_action();
                    while (true)
                    {
                        if (card1.game->command() == "Q" || card1.game->command() == "q")
                        { // ออกโปรเเกรม
                            return;
                        }
                        else if (card1.game->command() == "A" || card1.game->command() == "a")
                        { // เปิดทุกเลข
                            card1.set_opened_pos("11111");
                            break;
                        }
                        else if (card1.game->command() == "C" || card1.game->command() == "c")
                        { // หน้าเเสดงรางวัลที่ได้รับ
                            prize1.game->top_screen();
                            prize1.awards_received();
                            prize1.bottom_screen();
                            prize1.game->input_action();
                            while (true)
                            {
                                if (prize1.game->command() == "Q" || prize1.game->command() == "q")
                                { // ออกโปรเเกรม
                                    return;
                                }
                                else if (prize1.game->command() == "H" || prize1.game->command() == "h")
                                { // กลับหน้า Home
                                    break;
                                }
                                else
                                { // คำสั่ง Error
                                    prize1.game->error_action();
                                }
                            }
                            if (prize1.game->command() == "H" || prize1.game->command() == "h")
                            { // กลับหน้า Home
                                break;
                            }
                        }
                        else if (isdigit(card1.game->command()[0]))
                        { // เปิดเลขที่ละหลัก
                            open_pos = stoi(card1.game->command());
                            // std::cout<< open_pos;
                            if (open_pos > 0 && open_pos <= 3)
                            { // เปืดหลักที่มากกว่าที่มี
                                break;
                            }
                            else
                            { // คำสั่ง Error
                                game_def.game->error_action();
                            }
                        }
                        else
                        { // คำสั่ง Error
                            game_def.game->error_action();
                        }
                    }
                    if (prize1.game->command() == "H" || prize1.game->command() == "h")
                    { // กลับหน้า Home
                        break;
                    }
                }
                break;
            }
            else if (game_def.game->command() == "R" || game_def.game->command() == "r")
            { // หน้าเเสดงกฏ
                game_def.game->top_screen();
                game_def.rules();
                game_def.bottom_screen();
                game_def.game->input_action();
                while (true)
                {
                    if (game_def.game->command() == "Q" || game_def.game->command() == "q")
                    { // ออกโปรเเกรม
                        return;
                    }
                    else if (game_def.game->command() == "H" || game_def.game->command() == "h")
                    { // กลับหน้า Home
                        break;
                    }
                    else
                    { // คำสั่ง Error
                        game_def.game->error_action();
                    }
                }
                break;
            }
            else if (game_def.game->command() == "D" || game_def.game->command() == "d")
            { // หน้าเเสดงตารางรางวัล
                game_def.game->top_screen();
                game_def.awards_detail();
                game_def.bottom_screen();
                game_def.game->input_action();
                while (true)
                {
                    if (game_def.game->command() == "Q" || game_def.game->command() == "q")
                    { // ออกโปรเเกรม
                        return;
                    }
                    else if (game_def.game->command() == "H" || game_def.game->command() == "h")
                    { // กลับหน้า Home
                        break;
                    }
                    else
                    { // คำสั่ง Error
                        game_def.game->error_action();
                    }
                }
                break;
            }
            else
            { // คำสั่ง Error
                game_def.game->error_action();
            }
        }
    }
}