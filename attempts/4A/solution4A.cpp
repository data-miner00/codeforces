#include "solution4A.h"
#include <iostream>

bool isPrimeAndDivisibleEvenly(int num) {
    return (num != 2 && num % 2 != 1);
}

void setup() {
    for (int i = 1; i <=100; i++) {
        std::cout << i << " : ";
        if (isPrimeAndDivisibleEvenly(i)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}