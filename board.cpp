#include "board.hpp"

#include <stdexcept>
#include <iostream>

Board::Board(unsigned height, unsigned width)
    : height{height}
    , width{width}
    , board(height, std::string(width, ' '))
    , view{nullptr}
{
}

unsigned Board::getHeight() const { return height; }
unsigned Board::getWidth() const { return width; }

void Board::setView(View* newView)
{
    // TODO: Implement.
    this->view = newView;
}

void Board::draw(unsigned y, unsigned x,
                 const std::vector<std::string>& sprite)
{
    // TODO: Implement.
    // checks for out of bounds
    // vertical check
    if (y + sprite.size() - 1 >= this->height)
        throw std::logic_error("Out of bounds\n");
    for (unsigned i = 0; i < sprite.size(); ++i)
    {
        if (x + sprite[i].size() - 1 >= this->width)
        {
            throw std::logic_error("Out of bounds\n");
        }
    }

    for (unsigned i = 0; i < sprite.size(); ++i) {
        this->board[y++].replace(x,sprite[i].size(),sprite[i]);
    }
}

void Board::display()
{
    // TODO: Implement.
    if (this->view != nullptr) {
        this->view->display(this->board);
    }
    else
        throw std::logic_error("View instance is not created");
}

void Board::erase()
{
    this->board = std::vector<std::string>(height, std::string(width,' '));
}
