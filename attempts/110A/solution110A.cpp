#include "solution110A.hpp"
#include <iostream>
#include <string>
#include <regex>
#include <sstream>

// Potentially slow solution
void setup() {
    int lucky_number;
    std::string lucky_number_str;
    std::stringstream ss;

    std::cin >> lucky_number;

    ss << lucky_number;
    ss >> lucky_number_str;

    std::regex reg("^[47]+$");
    std::smatch matches;

    std::regex_search(lucky_number_str, matches, reg);

    std::cout << (matches.empty() ? "NO" : "YES") << "\n";
}