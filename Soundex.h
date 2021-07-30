#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

static const size_t MaxCodeLength{4};
const std::string NotADigit{"*"};
class Soundex {
public:
    std::string encode(const std::string &word) const;

private:
    std::string head(const std::string &word) const;
    std::string tail(const std::string &word) const;
    std::string encodedDigits(const std::string &word) const;
    std::string encodedDigit(char letter) const;
    void encodeHead(std::string &encoding, const std::string &word) const;
    void encodeTail(std::string &encoding, const std::string &word) const;
    void encodeLetter(std::string &encoding, char letter, char lastLetter) const;
    std::string zeroPad(const std::string &word) const;
    bool isComplete(const std::string &encoding) const;
    std::string lastDigit(const std::string &encoding) const;
    std::string upperFront(const std::string &string) const {
        return std::string(1, std::toupper(static_cast<unsigned char>(string.front())));
    }
    char lower(char c) const {
        return std::tolower(static_cast<unsigned char>(c));
    }
    bool isVowel(char letter) const {
        return std::string("aeiouy").find(lower(letter)) != std::string::npos;
    }
};

#endif //SOUNDEX_H