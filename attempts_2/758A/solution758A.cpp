#include "solution758A.h"
#include <iostream>
#include <vector>

void setup() {
    int n, total = 0;
    std::cin >> n;
    int max = INT_MIN;

    std::vector<int> welfares;

    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        welfares.push_back(temp);
        if (temp > max) max = temp;
    }

    for (auto i : welfares) {
        total += (max - i);
    }

    std::cout << total;
}