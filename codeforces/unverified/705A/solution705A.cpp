#include "solution705A.h"
#include <iostream>

std::string process_feeling(int n) {
    return process_feeling(n, 1, "");
}

std::string process_feeling(int n, int c, std::string concat_str) {
    std::string love_or_hate = "love";

    bool isOdd = c % 2 != 0;
    if (isOdd) {
        love_or_hate = "hate";
    }
    if (n == c) {
        return concat_str + " I " + love_or_hate + " it";
    }

    return process_feeling(n, ++c, concat_str + (c==1 ? "I " : " I ") + love_or_hate + " that");
}

void setup() {
    int num;

    std::cin >> num;
    std::cout << process_layer(num) << std::endl;
}