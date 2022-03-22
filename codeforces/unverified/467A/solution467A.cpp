#include "solution467A.h"
#include <iostream>
#include <map>

void setup() {
    int n, a = 0;
    std::cin >> n;

    std::map<int, int> rooms;

    for (int i = 0; i < n; i++) {
        int a, m;
        std::cin >> a >> m;
        rooms.insert({a, m});
    }

    for (auto i = rooms.begin(); i != rooms.end(); ++i) {
        if (i->first + 2 < i->second) a++;
    }

    std::cout << a;
}
