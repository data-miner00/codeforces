// Reference: https://www.delftstack.com/howto/cpp/how-to-convert-int-to-char-array-in-cpp/
#include <iostream>
#include <string>
#include <sstream>
#include <charconv>

#define MAX_DIGITS 10

int main() {
    int number = 1234;

    // C way
    char num_char[MAX_DIGITS + sizeof(char)];

    std::sprintf(num_char, "%d", number);
    std::printf("num_char: %s \n", num_char);

    // C++ way with string
    std::string tmp = std::to_string(number);
    char const *num_char = tmp.c_str();

    printf("num_char: %s \n", num_char);

    // C++ way with stringstream
    std::stringstream tmp;
    tmp << number;

    char const *num_char = tmp.str().c_str();
    printf("num_char: %s \n", num_char);

    // C++ with charconv
    char num_char[MAX_DIGITS + sizeof(char)];

    std::to_chars(num_char, num_char + MAX_DIGITS, number);
    std::printf("num_char: %s \n", num_char);
}