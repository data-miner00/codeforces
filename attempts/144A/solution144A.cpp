#include "solution144A.h"
#include <iostream>

void setup() {
    int n;
    int min = 100, max = 2;
    int minindex, maxindex;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        if (temp > max) {
            max = temp;
            maxindex = i;
            continue;
        }
        if (temp <= min) {
            min = temp;
            minindex = i;
        }
    }
    // push to right for 1 unit
    if (maxindex >= minindex) {
        minindex++;
    }
    std::cout << maxindex + ((n - 1) - minindex);
}
