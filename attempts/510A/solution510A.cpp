#include "solution510A.h"
#include <iostream>

void setup() {
    int m, n;
    std::cin >> m >> n;
    bool yes = true;
    for (int i = 0; i < m; i++) {
        if (i % 2 != 0) yes = !yes;
        for (int j = 0; j <= n; j++) {
            if (i % 2 == 0) {
                if (j == n) {
                    std::cout << "\n";
                } else {
                    std::cout << "#";
                }
            } else {
                if ((j == n - 1 && !yes) || (j == 0 && yes)) {
                    std::cout << "#";
                } else if (j == n){
                    std::cout << "\n";
                } else {
                    std::cout << ".";
                }
            }
        }
    }
}