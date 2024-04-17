#include "FileManager.h"
#include <iostream>

void FileManager::writeFile(const std::string& filepath, const std::string& text) {
    std::ofstream file(filepath, std::ios::app); // Appends to existing file
    if (!file) {
        std::cerr << "Cannot open the file for writing." << std::endl;
        return;
    }
    file << text << std::endl;
    file.close();
}

std::string FileManager::readFile(const std::string& filepath) {
    std::ifstream file(filepath);
    std::string line;
    std::string content;
    if (!file) {
        std::cerr << "Cannot open the file for reading." << std::endl;
        return "";
    }
    while (getline(file, line)) {
        content += line + "\n";
    }
    file.close();
    return content;
}
