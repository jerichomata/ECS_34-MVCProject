#include "print_controller.hpp"

Command PrintController::getInput()
{
    // TODO: Implement.
    char ch;
    std::cin>>ch;
    if (ch == 'a')
        return Command::Left;
    else if (ch == 'd')
        return Command::Right;
    else if (ch =='w')
        return Command::Up;
    else if (ch == 's')
        return Command::Down;
    else
        return Command::Invalid;
}
