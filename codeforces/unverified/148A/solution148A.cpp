#include "solution148A.h"
#include <iostream>

void setup() {
    int k, l, m, n, d;

    std::cin >> k >> l >> m >> n >> d;

    int count = 0;

    if (k == 1 ||
        l == 1 ||
        m == 1 ||
        n == 1) {
            std::cout << d;
            return;
        }

    for (int i = 1; i <= d; i++) {
        bool isK = i % k == 0;
        bool isL = i % l == 0;
        bool isM = i % m == 0;
        bool isN = i % n == 0;

        if (isK || isL || isM || isN) {
            count++;
        }
    }

    std::cout << count;
}