#include "solution61A.h"
#include <iostream>
#include <string>
#include <bitset>

void setup() {

    std::string bin_string1, bin_string2;
    std::getline(std::cin, bin_string1, '\n');
    std::getline(std::cin, bin_string2, '\n');

    int bin1, bin2;

    bin1 = std::stoi(bin_string1, 0, 2);
    bin2 = std::stoi(bin_string2, 0, 2);
    int result = bin1 ^ bin2;

    const int bitlength = bin_string1.size();
    
    // Error: Cannot assign variable to const
    // TODO: Reimplement
    std::cout << std::bitset<bitlength>(result) << "\n";
}