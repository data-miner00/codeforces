#include <iostream>
#include <string>
#include <set>

void setup() {
    std::set<char> unique_char;
    std::string username;

    std::getline(std::cin, username, '\n');

    for (int i = 0; i < username.size(); i++) {
        unique_char.insert(username[i]);
    }
    if(unique_char.size() % 2 != 0) std::cout << "IGNORE HIM!";
    else std::cout << "CHAT WITH HER!";
}