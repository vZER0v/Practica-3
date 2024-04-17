#ifndef MESSAGECODER_H
#define MESSAGECODER_H
#include <string>
#include <map>

class MessageCoder {
private:
    std::map<char, char> codeMap;
public:
    void loadCodeMap(const std::string& filepath);
    std::string encode(const std::string& message);
    std::string decode(const std::string& message);
};

#endif
