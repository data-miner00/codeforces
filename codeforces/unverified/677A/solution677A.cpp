#include "solution677A.h"
#include <iostream>

void setup() {
    int n, h, width = 0;

    std::cin >> n >> h;

    int a[n];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (auto val : a) {

        if (val > h) {
            width += 2;
            continue;
        }
        width++;

        std::cout << "when val: " << val << " width:" <<width << std::endl;
    }

    std::cout << "Final width: " << width;
}
