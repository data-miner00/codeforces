#include "solution520A.h"
#include <iostream>
#include <unordered_set>
#include <cctype>

void setup() {
    int n;
    std::cin >> n;

    char sentence[n];
    std::cin >> sentence;

    if (n < 26) {
        std::cout << "NO";
        return;
    }

    std::unordered_set<int> chars;

    for (auto i : sentence) {
        chars.insert(tolower(i));
    }

    std::cout << (chars.size() < 26 ? "NO" : "YES");
}