#include "solution432A.h"
#include <iostream>
#define MAX_TEAM 3
#define MAX_PARTCIPATE 5

void setup() {
    int n, k, eligibinle = 0;
    std::cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;

        if (temp <= MAX_PARTCIPATE - k) {
            eligibinle++;
        }
    }

    std::cout << eligibinle / MAX_MEMBER;
}
