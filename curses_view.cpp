#include "curses_view.hpp"

CursesView::CursesView()
{
    // TODO: Implement.
    initscr();
    cbreak();
    noecho();
    clear();
    refresh();
}

CursesView::~CursesView()
{
    // TODO: Implement.
    endwin();
}

void CursesView::display(const std::vector<std::string>& board)
{
    // TODO: Implement.
    unsigned x=0;
    for (unsigned i = 0; i < board.size(); ++i) {
        mvaddstr(x++,0,board[i].c_str());
        refresh();
    }
    curs_set(0);
}
