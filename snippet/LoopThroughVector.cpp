#include <vector>
#include <iostream>

int main() {
    std::vector<int> myVector{1, 2, 3, 4};

    for (const auto &a : myVector) {
        std::cout << a << '\n';
    }
}