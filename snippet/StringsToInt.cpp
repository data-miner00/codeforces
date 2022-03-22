#include <iostream>
#include <sstream>

int main() {

    std::string s = "12345";

    std::stringstream ssobj(s);

    int x = 0;
    ssobj >> x;

    std::cout << x << std::endl;

    return 0;
}

// Reference: https://www.geeksforgeeks.org/converting-strings-numbers-cc/