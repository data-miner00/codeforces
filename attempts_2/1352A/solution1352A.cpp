#include "solution1352A.h"
#include <iostream>
#include <cstring>
#include <cmath>

// BUGGED SOLUTION
void setup() {
    int n;
    std::cin >> n;

    int storage[100][10];

    for (int i = 0; i < n; i++) {
        char input[100];
        std::cin >> input;


        int length = strlen(input);

        int counter = 0;
        for (int j = 0; j < length; j++) {
            if (input[j] == '0') continue;
            int num = input[j] - '0';

            storage[i][counter++] = num * std::pow(10, (length - j - 1));
        }
    }

    for(int x = 0; x < (sizeof(*storage) / sizeof(**storage)); x++) {
        for(int y = 0; y < (sizeof(storage) / sizeof(*storage)); y++) {
            std::cout << storage[x][y] << " ";
        }
        std::cout << std::endl;
    }
}
