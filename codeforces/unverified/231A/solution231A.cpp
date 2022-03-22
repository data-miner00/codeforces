#include "solution231A.h"
#include <iostream>

void setup() {
	int number_q_do = 0;

    int no_of_problem;

    std::cin >> no_of_problem;

    int matrix[3][no_of_problem];

    for (int i = 0; i < no_of_problem; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        matrix[0][i] = a;
        matrix[1][i] = b;
        matrix[2][i] = c;
    }

    for (int i = 0; i < no_of_problem; i++) {
        int okCount = 0;
        for (int j = 0; j < 3; j++) {
            if (matrix[j][i] == 1) {
                okCount++;
                if (okCount >= 2)
                    break;
            }
        }
        if (okCount >= 2) {
            number_q_do++;
        }
    }

    std::cout << number_q_do << std::endl;
}