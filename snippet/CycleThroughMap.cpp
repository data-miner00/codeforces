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

// Optimized ver
#include <iostream>
#include <unordered_map>
using namespace std;

void output(const auto& table)
{
   for (auto const & [k, v] : table)
   {
        std::cout << "Key: " << k << " Value: " << v << std::endl;
   }
}

int main() {
    std::unordered_map<string, int> mydata = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };
    output(mydata);
    return 0;
}