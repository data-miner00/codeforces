#include <iostream>
#include <algorithm>

int main() {
    
    // C++11
    std::string str = "???";
    for(char& c : str) {
        std::cout << c;
    }

    // iterator
    for(std::string::iterator it = str.begin(); it != str.end(); ++it) {
        std::cout << *it
    }

    // for loop
    for(std::string::size_type i = 0; i < str.size(); ++i) {
        std::cout<< str[i];
    }

    // null terminated char array
    char* str = '???';
    for(char* it = str; *it; ++it) {
        std::cout << *it;
    }

    // foreach
    std::for_each(str.begin(), str.end(), [] (char c) {
        std::cout << c;
    });
}

// Reference: https://stackoverflow.com/questions/9438209/for-every-character-in-string