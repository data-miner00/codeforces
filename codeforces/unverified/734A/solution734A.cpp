#include "solution734A.h"
#include <iostream>

void setup() {
    int n, anton = 0, danik = 0;
    std::cin >> n >> std::ws;
    char games[n];
    std::cin >> games;

    for (int i =0; i < n; i++) {
        if (games[i] == 'A') anton++;
        else danik++;
    }

    std::cout << (anton > danik ? "Anton": "Danik");
}
