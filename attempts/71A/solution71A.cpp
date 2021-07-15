#include "solution71A.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

char* shortenChar(char str[]) {
    int size = strlen(str);

    char head;
    char tail;
    int middle;
    char middleChar[10];
    char finalStr[30];

    if (size > 10) {
        head = str[0];
        tail = str[size - 1];
        middle = size - 2;
        itoa(middle, middleChar, 10);
        finalStr[0] = head;
        strcat(finalStr, middleChar);
        finalStr[strlen(finalStr) - 1] = tail;

    } else {
        strcpy(finalStr, str);
    }
    std::cout << middle << std::endl;
    std::cout << finalStr << std::endl;
    return finalStr;
}

// Bugged, need fix
void setupChar() {
    char str[30];
    std::cin >> str;
    std::cout << shortenChar(str) << std::endl;
}

std::string shortenString(std::string str) {
    int size = str.length();
    std::string head;
    std::string tail;
    std::string middle;
    std::string finalStr;

    if (size > 10) {
        head = str[0];
        tail = str[size - 1];
        middle = patch::to_string(size - 2);
        finalStr = head + middle + tail;
    } else {
        finalStr = str;
    }
    return finalStr;
}

void setupString() {
    std::string input;
    std::getline(std::cin, input, '\n');
    std::cout << shortenString(input) << std::endl;
}