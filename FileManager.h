#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <fstream>
#include <string>

class FileManager {
public:
    void writeFile(const std::string& filepath, const std::string& text);
    std::string readFile(const std::string& filepath);
};

#endif
