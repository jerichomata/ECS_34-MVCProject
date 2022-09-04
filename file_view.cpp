#include "file_view.hpp"

FileView::FileView(const std::string& filename)
{
    this->filename = filename;
    std::ofstream Wrt(this->filename);
    Wrt.close();
}

void FileView::display(const std::vector<std::string>& board)
{
    // TODO: Implement.
    std::ofstream Wrt(this->filename,std::ios::app);
    for (unsigned i = 0; i < board.size(); ++i)
    {
        Wrt<<board[i];
        Wrt<<std::endl;
    }
    Wrt.close();
}
