#include "solution116A.hpp"
#include <iostream>

void setup() {
    int station, current_out, current_in, on_tram = 0, mininimum = 0;

    std::cin >> station;


    for (int i = 0; i < station; i++) {
        std::cin >> current_out >> current_in;
        on_tram += current_in - current_out;
        if (on_tram > mininimum) mininimum = on_tram;
    }

    std::cout << mininimum;
}