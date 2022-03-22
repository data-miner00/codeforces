#include <iostream>
#include <regex>

void dump_regex_matches(const std::cmatch &match) {
    std::cout << "Matches:\n";

    for (std::size_t i = 0; i < match.size(); ++i) {
        std::cout << i << ": " << match.str(i) << std::endl;
    }
}

int main() {

    std::regex regex(R"((\d+): \[([^\]]+)\] (.*))");
    std::cmatch match;
    std::regex_match("123: [error] Hello World", match, regex);
    dump_regex_matches(match);
    return 0;
}
