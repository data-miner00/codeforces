#include "solution469A.h"
#include <iostream>
#include <set>

void setup(){
    int n, px, py;
    std::set<int> levels;
    std::cin >> n;


    std::cin >> px;
    for (int i=0; i < px; i++) {
        int temp;
        std::cin >> temp;
        levels.insert(temp);
    }

    std::cin >> py;
    for (int i =0; i < py; i++) {
        int temp;
        std::cin >> temp;
        levels.insert(temp);
    }

    std::cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!");
}