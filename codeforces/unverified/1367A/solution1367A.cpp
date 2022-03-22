#include "solution1367A.h"
#include <iostream>
#include <string>
#include <queue>

void setup() {
    int n;
    std::cin >> n;
    std::queue<std::string> results;

    for (int i = 0; i < n + 1; i++) {
        std::string input, output = "";
        std::getline(std::cin, input, '\n');
        int length = input.size();
        for (int j = 0; j * 2 < length; j++) {
            output.push_back(input[j * 2]);
        }
        output.push_back(input[length - 1]);
        results.push(output);
    }
    while(!results.empty()) {
        std::cout << results.front() << "\n";
        results.pop();
    }
}