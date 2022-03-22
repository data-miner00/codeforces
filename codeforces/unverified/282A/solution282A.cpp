#include "solution282A.h"
#include <iostream>
#include <string>
#include <cstring>

void setup() {
    int total = 0;
    int no_inputs;


    std::cin >> no_inputs;

    // To clear buffer
    std::cin.clear();
    std::cin.sync();


    for (int i =0; i < no_inputs; i++) {
        std::string str;
        std::getline(std::cin, str);

        if (str.compare("X++") == 0 || str.compare("++X") ==0) {
            total++;
        } else {
            total--;
        }
    }

    std::cout << total;
}