#include "controller.hpp"

std::string cmdToString(Command cmd)
{
    // TODO: Implement.
    if (cmd == Command::Left)
        return std::string("left");
    else if(cmd == Command::Right)
        return std::string("right");
    else if(cmd == Command::Up)
        return std::string("up");
    else if(cmd == Command::Down)
        return std::string("down");
    else
        return std::string("invalid");
}
