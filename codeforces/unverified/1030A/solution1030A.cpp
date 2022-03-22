#include "solution1030A.h"
#include <iostream>

void setup() {
    int n;
    bool isHard = false;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int input;
        std::cin >> input;
        if(input == 1) {
            isHard = true;
        }
    }

    std::cout << (isHard ? "HARD" : "Easy") << std::endl;
}