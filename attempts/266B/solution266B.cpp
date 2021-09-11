#include "solution266B.hpp"
#include <iostream>

void setup() {
    int n, t;

    std::cin >> n >> t >> std::ws;

    char the_queue[n];

    std::cin >> the_queue;

    bool skip_next_iter = false;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (skip_next_iter) {
                skip_next_iter = false;
                continue;
            }

            if (!skip_next_iter && the_queue[j] == 'B' && the_queue[j+1] == 'G') {
                the_queue[j] = 'G';
                the_queue[j+1] = 'B';
                skip_next_iter = true;
            }
        }
    }

    std::cout << the_queue;
}