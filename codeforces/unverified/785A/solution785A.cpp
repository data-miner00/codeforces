#include "solution785A.h"
#include <iostream>

void setup() {
    int n, total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        char shape[20];
        std::cin >> shape;
        switch (shape[0]) {
        case 'T':
            total += 4;
            break;
        case 'C':
            total += 6;
            break;
        case 'O':
            total += 8;
            break;
        case 'D':
            total += 12;
            break;
        case 'I':
            total += 20;
            break;
        default:
            total += 0;
        }
    }
    std::cout << total;
}