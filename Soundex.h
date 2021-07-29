#ifndef SOUNDEX_H
#define SOUNDEX_H
#include <string>

static const size_t MaxCodeLength{4};

class Soundex {
public:
    std::string encode(const std::string &word) const;

private:
    std::string head(const std::string &word) const;
    std::string encodedDigits(const std::string &word) const;
    std::string encodedDigit() const;
    std::string zeroPad(const std::string &word) const;
};

#endif //SOUNDEX_H