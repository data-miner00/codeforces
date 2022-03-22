#include "solution977A.hpp"
#include <iostream>

void setup() {
    int n, k;

    std::cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if ((n % 10) == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }

    std::cout << n;
}