#include "solution1328A.h"
#include <iostream>

void setup() {
    int n;
    std::cin >> n;
    int res[n];

    for (int i = 0; i < n; i++) {
        int number, divident;
        std::cin >> number >> divident;
        if (number % divident != 0) {
            res[i] = (divident * (number / divident + 1)) - number;
            continue;
        }
        res[i] = 0;
    }

    for (auto i : res) {
        std::cout << i << "\n";
    }
}