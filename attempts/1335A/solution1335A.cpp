#include "solution1335A.h"
#include <iostream>

void setup() {
    int n;
    std::cin >> n;
    int results[n];

    for (int i = 0; i < n; i++) {
        int c;
        std::cin >> c;
        bool hasRemainder = c % 2;
        results[i] = (hasRemainder ? c / 2 : (c / 2) - 1);

    }

    for (int i = 0; i < n; i++) {
        std::cout << results[i] << std::endl;
    }
}