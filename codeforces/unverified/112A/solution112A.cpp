#include "solution112A.h"
#include <iostream>
#include <string>
#include <cstring>

int lexicographical_cmp(std::string first, std::string second) {
    for (int i = 0; i < first.length(); i++) {
        int charAsciiFirst = int(first[i]);
        int charAsciiSecond = int(second[i]);

        if (charAsciiFirst == charAsciiSecond ||
            charAsciiFirst == charAsciiSecond + 32 ||
            charAsciiFirst == charAsciiSecond - 32)
                continue;
        else if (charAsciiFirst < charAsciiSecond) {
            return -1;

        } else if (charAsciiFirst > charAsciiSecond) {
            return 1;
        }
    }
    return 0;
}

void setup() {
    std::string first, second;
    std::getline(std::cin, first);
    std::getline(std::cin, second);

    std::cout << lexicographical_cmp(first, second);
}