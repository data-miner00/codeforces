#include "solution41A.hpp"
#include <iostream>
#include <string>

void strrev(std::string& str) {
    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;

        // std::swap(str[i], str[n-i-1]);
    }
}

void setup() {
    std::string original, translation;
    std::getline(std::cin, original, '\n');
    std::getline(std::cin, translation, '\n');

    strrev(original);
    std::cout << (original.compare(translation) == 0 ? "YES" : "NO");
}