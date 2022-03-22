#include "solution490A.h"
#include <iostream>
#include <cmath>

void setup() {
    int n;
    std::cin >> n;
    int one = 0, two = 0, three = 0;

    int one_id[20], two_id[20], three_id[20];
    for (int i = 1; i <= n; i++) {
        int temp;
        std::cin >> temp;

        switch(temp) {
        case 1:
            one_id[one] = i;
            one++;
            break;
        case 2:
            two_id[two] = i;
            two++;
            break;
        case 3:
            three_id[three] = i;
            three++;
            break;
        default:
            return -1;
        }
    }

    int max_group = std::min(std::min(one, two), three);
    std::cout << max_group << "\n";
    for (int i = 0; i < max_group; i++) {
        std::cout << one_id[i] << " " << two_id[i] << " " << three_id[i] << "\n";
    }
}