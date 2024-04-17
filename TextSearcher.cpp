#include "TextSearcher.h"
#include <fstream>
#include <iostream>

std::map<std::string, int> TextSearcher::searchInFile(const std::string& filepath, const std::string& searchQuery) {
    std::ifstream file(filepath);
    std::map<std::string, int> occurrences;
    std::string line;

    if (!file) {
        std::cerr << "Cannot open the file." << std::endl;
        return occurrences;
    }

    while (getline(file, line)) {
        size_t pos = line.find(searchQuery, 0);
        while(pos != std::string::npos) {
            occurrences[searchQuery]++;
            pos = line.find(searchQuery, pos + searchQuery.length());
        }
    }

    file.close();
    return occurrences;
}
