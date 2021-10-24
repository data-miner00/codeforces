#include "solution427A.h"
#include <iostream>

void setup() {
    int n, state = 0, count = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        if(state < 1 && temp > 0 && temp < 10) {
            state = temp;
        } else {
            state += temp;
        }

        if (state < 0) {
            count++;
        }
    }
    std::cout << count;
}