#include "solution50A.h"
#include <iostream>
#include <cmath>
#define DOMINO_HEIGHT 2.0
#define DOMINO_WIDTH 1.0

int calculateMaxDomino(const int m, const int n) {
    const float DOMINO_AREA = DOMINO_HEIGHT * DOMINO_WIDTH;
    if (m > n) {
        throw std::invalid_argument("M must not be bigger than N");
    }
    const float BOARD_AREA = (float)m * (float)n;
    return std::floor((BOARD_AREA / DOMINO_AREA));
}

void setup() {
    int m, n;

    std::cin >> m >> n;

    try {
        std::cout << calculateMaxDomino(m, n);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument!";
    }
}