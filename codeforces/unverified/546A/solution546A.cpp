#include <iostream>
#include <cmath>

// TODO: Change to std::accumulator
int calculate_bananas_cost(int want_banana, int initial_banana_cost) {
    int accumulator = 0;
    for (int i = 1; i <= want_banana; i++) {
        accumulator += initial_banana_cost * i;
    }
    return accumulator;
}

void setup() {

    int want_banana, initial_banana_cost, budget;
    std::cin >> initial_banana_cost >> budget >> want_banana;

    std::cout << std::abs(budget - calculate_bananas_cost(want_banana, initial_banana_cost));
}