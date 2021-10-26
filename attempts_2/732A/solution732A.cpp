#include "solution732A.h"
#include <iostream>

void setup() {
    int k, r;
    std::cin >> k >> r;

    for (int i = 1; i < 1000; i++) {
        if ((i * k) % 10 == 0 || (i * k) % 10 == r) {
            std::cout << i;
            break;
        }
    }
}