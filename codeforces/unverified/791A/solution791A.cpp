#include "solution791A.hpp"
#include <iostream>

void setup() {

    int limak, bob;

    std::cin >> limak >> bob;

    int i = 0;
    while (limak <= bob) {
        limak *= 3;
        bob *= 2;
        i++;
    }

    std::cout << i;
}