#include <iostream>

void setup() {
    int no_of_stone, no_to_take = 0;
    char stones[50];

    std::cin >> no_of_stone >> stones;

    for (int i = 0; i < no_of_stone; i++) {
        if (stones[i] != stones[i+1])
            break;
        no_to_take++;
    }

    std::cout << no_to_take;
}