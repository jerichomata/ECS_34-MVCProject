#ifndef FILE_VIEW_HPP
#define FILE_VIEW_HPP

#include "view.hpp"
#include <fstream>

class FileView : public View
{
public:
    FileView(const std::string& filename);
    void display(const std::vector<std::string>& board) override;

private:
    // TODO: Add members (if any) here.
    std::string filename;
};

#endif  // FILE_VIEW_HPP
