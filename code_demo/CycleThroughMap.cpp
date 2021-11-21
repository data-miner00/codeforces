// Reference: https://stackoverflow.com/questions/26281979/c-loop-through-map
#include <iostream>
#include <map>
#include <iterator>

int main() {
    std::map<string, int>::iterator it;

    for (it = symbolTable.begin(); it != symbolTable.end(); it++)
    {
        std::cout << it->first    // string (key)
                << ':'
                << it->second   // string's value 
                << std::endl;
    }
    
    // C++11+
    for (auto const& x : symbolTable)
    {
        std::cout << x.first  // string (key)
                << ':' 
                << x.second // string's value 
                << std::endl;
    }

    // C++17+
    for (auto const& [key, val] : symbolTable)
    {
        std::cout << key        // string (key)
                << ':'  
                << val        // string's value
                << std::endl;
    }

    return 0;
}