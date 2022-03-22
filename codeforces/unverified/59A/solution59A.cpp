#include "solution59A.hpp"
#include <iostream>
#include <cctype>
#include <iterator>

void setup() {
    std::string input;
    int lower = 0, upper = 0;

    std::getline(std::cin, input, '\n');

    for(std::string::iterator it = input.begin(); it != input.end(); ++it) {
        isupper(*it) ? upper++ : lower++;
    }

    if (lower >= upper) {
        for(std::string::iterator it = input.begin(); it != input.end(); ++it) {
            *it = tolower(*it);
        }
    } else {
        for(std::string::iterator it = input.begin(); it != input.end(); ++it) {
            *it = toupper(*it);
        }
    }
    std::cout << input;
}