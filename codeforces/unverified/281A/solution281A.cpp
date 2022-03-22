#include <iostream>

void setup() {
    char input[1000];
    std::cin >> input;

    if ((int)input[0] >= 97) input[0] = (char)((int)input[0] - 32);
    std::cout << input << "\n";
}