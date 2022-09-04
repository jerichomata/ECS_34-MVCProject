#include "curses_controller.hpp"

Command CursesController::getInput()
{
    int ch;
    ch = getch();
    if (ch == 'a')
        return Command::Left;
    else if (ch == 'd')
        return Command::Right;
    else if (ch =='w')
        return Command::Up;
    else if (ch == 's')
        return Command::Down;
    else if (ch == 27)
    {
        ch = getch();
        ch = getch();
        if (ch == 'D')
            return Command::Left;
        else if (ch == 'C')
            return Command::Right;
        else if (ch == 'A')
            return Command::Up;
        else if (ch == 'B')
            return Command::Down;
        else
            return Command::Invalid;
    }
    else
        return Command::Invalid;
}
