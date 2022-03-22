#include "solution1409A.h"
#include <iostream>
#include <cmath>

void setup() {
    int t;
    std::cin >> t;
    int result[t];
    for (int i = 0; i < t; i++) {
        int a, b, steps = 0;
        std::cin >> a >> b;
        int diff = std::abs(a - b);


        for (int j = 10; j > 0; j--) {
            if (diff == 0) {
                break;
            }
            steps += diff / j;
            diff = diff % j;
        }
        result[i] = steps;
    }

    for (auto i : result) {
        std::cout<< i << "\n";
    }
}