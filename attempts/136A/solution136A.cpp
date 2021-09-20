#include "solution136A.h"
#include <iostream>

/*
    VERY HARD QUESITON
 */
void setup() {
    int n, temp;

    std::cin >> n;

    int f[n];

    for (int i = 0; i < n; i++) {
        std::cin >> temp;

        f[temp - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << f[i] << " ";
    }
}