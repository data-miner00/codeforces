#include <iostream>

void setup() {
    int n, g = 0;

    std::cin >> n;

    // To clear buffer
    std::cin.clear();
    std::cin.sync();

    std::string poles = "";

    for (int i = 0; i < n; i++) {
        std::string temp;
        std::getline(std::cin, temp, '\n');
        if (poles != temp) {
            poles = temp;
            g++;
        }
    }

    std::cout << g;
}