#include "solution1154A.h"
#include <iostream>

// !Not sure correct or not
void setup() {
    int x1, x2, x3, x4;
    std::cin >> x1 >> x2 >> x3 >> x4;

    // a + b = x1
    // a + c = x2
    // b + c = x3
    // a + b + c = x4

    int a = x4 - x3;
    int b = x4 - x2;
    int c = x4 - x1;

    std::cout << a << " " << b << " " << c;
}