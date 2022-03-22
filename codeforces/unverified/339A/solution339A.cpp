#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

// TEMP solution, BUGGED
void setup() {
    std::string input;
    std::getline(std::cin, input, '\n');

    std::vector<int> num_vec;
    std::string delimiter = "+";
    std::size_t start = 0U;
    std::size_t end = input.find(delimiter, start);


    while (end != std::string::npos) {
        std::string num_str = input.substr(start, end - start);
        std::stringstream num_ss_obj(num_str);
        int num_int;
        num_ss_obj >> num_int;
        num_vec.push_back(num_int);

        start = end + delimiter.length();
        end = input.find(delimiter, start);
    }

    std::sort(num_vec.begin(), num_vec.end());

    for (std::vector<int>::iterator it=num_vec.begin(); it!=num_vec.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << "\n";
}