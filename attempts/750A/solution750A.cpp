#include "solution750A.h"
#include <iostream>

void setup() {
    int n, k;
    int difficulty_scale = 5;
    int total_minuts = 4 * 60;
    int counter = 0;
    std::cin >> n >> k;
    total_minuts -= k;


    for (int i = 1; i <= n; i++) {
        total_minuts -= i * difficulty_scale;
        if (total_minuts >= 0) {
            counter++;
        }
    }

    std::cout << counter;
}