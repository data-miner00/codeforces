#include "solution228A.h"
#include <iostream>
#include <set>

void setup(){

    std::set<int> shoe_sizes;

    for(int i = 0; i < 4; i++) {
        int input;
        std::cin >> input;
        shoe_sizes.insert(input);
    }

    std::cout << 4 - shoe_sizes.size();
}