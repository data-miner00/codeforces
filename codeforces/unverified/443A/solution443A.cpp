#include "solution443A.h"
#include <iostream>
#include <set>

void setup() {
    std::string input;
    std::getline(std::cin, input, '\n');

    if (input.length() > 2) {
        std::string processed, delimeter = ", ";
        std::set<std::string> unique_chars;

        processed = input.substr(1, input.length() - 2);

        std::size_t pos = 0;

        while((pos = processed.find(delimeter)) != std::string::npos) {
            std::string token = processed.substr(0, pos);
            unique_chars.insert(token);
            processed.erase(0, pos + delimeter.length());
        }

        unique_chars.insert(processed);

        std::cout << unique_chars.size();
        return;
    }

    std::cout << 0;
}