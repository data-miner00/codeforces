#include <iostream>
#include <string>
#include <regex>
#include <ctime>
#include <iterator>

void PrintMatches(std::string str, std::regex reg) {
    std::smatch matches;
    std::cout << std::boolalpha;

    while(std::regex_search(str, matches, reg)) {
        std::cout << "Is there a match :" << matches.ready() << "\n";
        std::cout << "Are there no matches :" << matches.empty() << "\n";
        std::cout << "Number of matches: " << matches.size() << "\n";
        std::cout << matches.str(1) << "\n";
        str = matches.suffix().str();
        std::cout << "\n";
    }
}

void PrintMatches2(std::string str, std::regex reg) {
    std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
    std::sregex_iterator lastMatch;

    while(currentMatch != lastMatch) {
        std::smatch match = *currentMatch;
        std::cout << match.str() << "\n";
        currentMatch++;
    }
    std::cout << std::endl;
}

int main() {
    std::string str = "The apes was at the apex";
    std::regex reg("(ape[^ ]?)");

    std::string str3 = "Cat rat mat fat pat";
    std::regex reg3("([crmfp]at)");

    PrintMatches(str3, reg3);

    // Replace match
    std::string str4 = std::regex_replace(str3, reg3, "bzelbub");
    std::cout << str4;
}

// Reference: https://www.youtube.com/watch?v=9K4N6MO_R1Y
