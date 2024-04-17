#include "MessageCoder.h"
#include <fstream>
#include <iostream>

void MessageCoder::loadCodeMap(const std::string& filepath) {
    std::ifstream file(filepath);
    char original, coded;
    if (!file) {
        std::cerr << "Cannot open the code map file." << std::endl;
        return;
    }
    while (file >> original >> coded) {
        codeMap[original] = coded;
    }
    file.close();
}

std::string MessageCoder::encode(const std::string& message) {
    std::string encoded;
    for (char c : message) {
        if (codeMap.find(c) != codeMap.end()) {
            encoded += codeMap[c];
        } else {
            encoded += c; // If character is not in the map, it stays the same
        }
    }
    return encoded;
}

std::string MessageCoder::decode(const std::string& message) {
    std::map<char, char> reverseMap;
    for (auto& pair : codeMap) {
        reverseMap[pair.second] = pair.first;
    }
    std::string decoded;
    for (char c : message) {
        if (reverseMap.find(c) != reverseMap.end()) {
            decoded += reverseMap[c];
        } else {
            decoded += c;
        }
    }
    return decoded;
}
