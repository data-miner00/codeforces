#include "solution617A.hpp"
#include <iostream>

void setup() {
    int x, n  = 0;

    std::cin >> x;

    for (int i = 5; i >= 1; i--) {
        n += x / i;
        x = x % i;
        std::cout << "i: " << i << "\nn: " << n << "\nx: " << x << "\n";
        if (x == 0) break;
    }

    std::cout << n;
}