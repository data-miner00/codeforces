#include "solution486A.h"
#include <iostream>
#include <cmath>

int f(int n) {
    return f(n, 0);
}

int f(int n, int a) {
    if (n == 1) return a - 1;
    return f(--n, (a + std::pow(-1, n) * n));
}

void setup() {
    int n;
    std::cin >> n;

    int res = f(n);
    std::cout << res;
    return 0;
}