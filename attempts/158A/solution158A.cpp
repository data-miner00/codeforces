#include <iostream>

void setup() {
    int no_peoples, passing_grade, people_passing = 0;
    int temp;
    std::cin >> no_peoples >> passing_grade;

    // Listens for keyboard interrupt to end the input
    // Enhancement is possible
    while(std::cin >> temp) {
        if (temp > passing_grade) {
            people_passing++;
        }
    }

    std::cout << people_passing << std::endl;
}