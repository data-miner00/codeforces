#include "solution996A.h"
#include <iostream>

#define ONE 1
#define FIVE 5
#define TEN 10
#define TWENTY 20
#define HUNDRED 100

void setup() {
    int n, count = 0;
    std::cin >> n;

    int bills[] = { HUNDRED, TWENTY, TEN, FIVE, ONE };
    int left = n;
    for (int i = 0; i < 5; i++) {
        int covered = left / bills[i];

        int residue = left % bills[i];

        if (residue > 0) {
            left = residue;
        } else {
            left = 0;
        }
        count += covered;
    }

    std::cout << count << "\n";;
}