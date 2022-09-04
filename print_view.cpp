#include "print_view.hpp"

void PrintView::display(const std::vector<std::string>& board)
{
    // TODO: Implement.
    for (unsigned i = 0; i < board.size(); ++i)
    {
        std::cout<<board[i] <<std::endl;
    }
}
