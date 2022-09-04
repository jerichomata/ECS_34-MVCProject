#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <string>
#include <iostream>

enum class Command
{
    Left,
    Right,
    Up,
    Down,
    Invalid
};

std::string cmdToString(Command cmd);

class Controller
{
public:
    Controller() = default;
    virtual ~Controller() = default;
    Controller(const Controller&) = delete;
    Controller& operator=(const Controller&) = delete;

    virtual Command getInput() = 0;
};

#endif  // CONTROLLER_HPP
