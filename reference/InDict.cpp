// Playing around while watching Youtube video: https://www.youtube.com/watch?v=yju4zwKSriI
#include <iostream>
#include <map>
#include <string>


// Attempt 1
bool isInDict(std::string word) {
    std::string words[] = { "cat", "car", "bar" };
    bool got = false;
    for (std::string wd : words) {
        for (int i = 0; i < word.size(); i++) {
            if (i == word.size() - 1 && (word[i] == '*' || word[i] == wd[i])) {
                got = true;
            }
            if (word[i] == '*' || word[i] == wd[i]) continue;

            break;
        }
    }
    return got;
}

// Attempt 2
class Dictionary {
private:
    std::map<std::string, std::string> dict;
public:
    Dictionary() {
        std::string words[] = { "cat", "car", "bar" };
        for (std::string wd : words) {
            dict.insert(std::make_pair(wd, wd));
            for (int i = 0; i < wd.size(); i++) {
                std::string copy = wd;
                copy[i] = '*';
                dict.insert(std::make_pair(copy, copy));
            }
        }
    }

    bool isInDict(std::string word) {
        auto it = dict.find(word);
        return it != dict.end();
    }
};
