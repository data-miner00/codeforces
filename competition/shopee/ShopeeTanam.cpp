// SHOPEE CODE LEAGUE 2021 Q1: Shopee Tanam

#include <iostream>
#include <vector>
#include <algorithm>

/*
 * Scenario 1: AFK.
 */
int scenario_1() {
    return 0;
}

/*
 * Scenario 2: Go through up till N cells and return back to origin.
 */
int scenario_2(std::vector<int> row, bool pos, std::size_t _size) {
    int temp = 0;
    int max = 0;
    std::vector<int> all_cases;

    // Reverse if position = true (start from right)
    if (pos) {
        reverse(row.begin(), row.end());
    }

    for (int i = 0; i < _size - 1; i++) {
        temp += row[i];
        all_cases.push_back(temp);
    }

    return *max_element(all_cases.begin(), all_cases.end());
}

/*
 * Scenario 3: Go through from one end to the other.
 */
int scenario_3(std::vector<int> row, std::size_t _size) {
    int temp = 0;

    for (int i = 0; i < _size; i++) {
        temp += row[i];
    }

    return temp;
}

/*
 * Calculate maximum health that can be obtained.
 */
int calculate_max_health(std::vector<std::vector<int>> daily_fruits, int days, std::size_t _size) {
    // Position variable: `false` means starts from left and `true` means start from right
    bool pos = false, experiment_pos = false;
    int maxmax = 0;
    int risk = 0;

    // Loop for number of days
    for (int i = 0; i < days; i++) {
        // Set scenario 1 as default
        int max = scenario_1();
        // Gather results if went through scenario 2 and 3 respectively
        int scenario_2_res = scenario_2(daily_fruits[i], pos, _size);
        int scenario_3_res = scenario_3(daily_fruits[i], _size);

        // Check if results is bigger
        if (scenario_2_res > max) {
            max = scenario_2_res;
        }
        else if (scenario_3_res > max) {
            max = scenario_3_res;
            pos = !pos;
        }

        // Add the max result for each days
        maxmax += max;

        // Risk experiment
        if (i == days - 1) {
            int temp = risk + scenario_2(daily_fruits[i], experiment_pos, _size);
            int temp2 = risk + scenario_3_res;
            risk += temp > temp2 ? temp : temp2;
        } else {
            risk += scenario_3_res;
            experiment_pos = !experiment_pos;
        }
    }

    // Return the final max result
    return risk > maxmax ? risk : maxmax;
}

int main() {
    // Get number of cases
    int test_case;
    std::cin >> test_case;

    int answers[test_case];

    // Foreach test cases
    for (int i = 0; i < test_case; i++) {
        int n, m;
        std::cin >> n >> m;

        std::vector<std::vector<int>> daily_fruits;

        for (int j = 0; j < n; j++) {
            std::vector<int> row;
            for (int k = 0; k < m; k++) {
                int temp;
                std::cin >> temp;
                row.push_back(temp);
            }
            daily_fruits.push_back(row);
        }

        answers[i] = calculate_max_health(daily_fruits, n, m);
    }

    std::cout << "\n\n";

    for (int i = 0; i < test_case; i++) std::cout << answers[i] << std::endl;
}
