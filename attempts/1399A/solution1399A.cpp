#include "solution1399A.h"
#include <iostream>

void setup() {
    int t;
    std::cin >> t;
    int result[t];
    for (int i  = 0; i < t; i++) {
        int n, min, max;
        std::cin >> n;
        std::cout << "out\n";
        for (int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            std::cout << "in\n";

            if (j == 0) {
                min = max = temp;
            }

            if (temp < min) min = temp;
            if (temp > max) max = temp;

        }
        result[i] = ((max - min) <= 1);
    }

    for (auto i : result) {
        std::cout << (i ? "YES" : "NO") << std::endl;
    }
}
