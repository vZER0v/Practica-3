#ifndef TEXTSEARCHER_H
#define TEXTSEARCHER_H
#include <string>
#include <map>

class TextSearcher {
public:
    std::map<std::string, int> searchInFile(const std::string& filepath, const std::string& searchQuery);
};

#endif
