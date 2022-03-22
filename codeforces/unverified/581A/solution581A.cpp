#include "solution581A.h"
#include <iostream>
#include <cmath>

void setup() {
    int a, b;
    std::cin >> a >> b;

    int fashion = 0, bland = 0;

    fashion = std::min(a, b);
    bland = (std::max(a, b) - fashion) / 2;

    std::cout << fashion << " " << bland;
}