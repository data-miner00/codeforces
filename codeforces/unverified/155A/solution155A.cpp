#include "solution155A.h"
#include <iostream>

void setup() {
    int counter = 0, n;
    int min, max, temp;

    std::cin >> n;
    std::cin >> temp;

    min = max = temp;

    for (int i = 0; i < n - 1; i++) {

        std::cin >> temp;

        if (temp < min) {
            min = temp;
            counter++;
        }
        if (temp > max) {
            max = temp;
            counter++;
        }
    }
    std::cout << counter;
}