#include "solution723A.j"
#include <iostream>

void setup(){
    int min, max;
    int temp;
    std::cin >> temp;
    min = max = temp;

    for (int i = 0; i < 2; i++) {
        std::cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
    }

    std::cout << max - min;
}
