#include "solution268A.h"
#include <iostream>

void setup() {
    int n, count = 0;
    std::cin >> n;
    int shirts[n][2];

    for (int i = 0; i < n; i++) {
        std::cin >> shirts[i][0] >> shirts[i][1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j==i) continue;

            if (shirts[i][0] == shirts[j][1]) count++;
        }
    }
    std::cout << count;
}