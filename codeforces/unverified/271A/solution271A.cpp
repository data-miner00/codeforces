#include "solution271A.h"
#include <string>
#include <iostream>
#include <sstream>
#include <unordered_set>

bool isDistint(int number) {
    std::string stringNumber;

    std::stringstream stream;
    stream << number;
    stream >> stringNumber;
    std::unordered_set<char> number_set;
    for (int i = 0; i < 4; i++) {
        number_set.insert(stringNumber[i]);
    }
    return number_set.size() == 4;
}

int getNextDistintYear(int year) {
    int nextYear = year;
    while(true) {
        nextYear++;
        if (isDistint(nextYear)) {
            break;
        }
    }
    return nextYear;
}

void setup() {
    int year;
    std::cin >> year;
    std::cout << getNextDistintYear(year) << std::endl;
}
