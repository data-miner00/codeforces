#include "solution1374A.h"
#include <iostream>
#include <vector>

void setup() {
    int t;
    std::cin >> t;
    std::vector<int> answer;

    for (std::size_t i = 0; i < t; i++) {
        int x, y, n;
        std::cin >> x >> y >> n;

        for (std::size_t i = n; i > 0; --i) {
            if (i % x == y) {
                answer.push_back(i);
                break;
            }

            if (i == 1) {
                answer.push_back(0);
            }
        }
    }

    for (const auto &a : answer) {
        std::cout << a << '\n';
    }
}