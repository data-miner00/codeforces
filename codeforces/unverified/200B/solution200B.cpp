#include "solution200B.h"
#include <iostream>
#include <iomanip>

void setup() {
    int num, temp, total = 0;
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cin >> temp;
        total += temp;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(12) << (total / (float)num) << std::endl;
}