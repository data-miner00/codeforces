#include <iostream>
#include <vector>

using namespace std;

// Reference: https://stackoverflow.com/questions/51223535/for-each-loop-in-c-for-two-dimensional-array

unsigned int arr[2][3] = { {1,2,3}, {4,5,6} }; // 2 rows, 3 columns
for (const auto& row: arr)  // & - copy by reference; const - protect overwrite; 
{
    for (const auto& col : row)
    {
        std::cout << col << " "; // 1 2 3 4 5 6
    }
}

vector<vector<int>> matrix { {1,2,3}, {4,5,6} }; // 2 rows, 3 columns

for (const auto& row : matrix)  // & - copy by reference; const - protect overwrite; 
{
    for (const auto& col : row)
    {
        std::cout << col << " "; // 1 2 3 4 5 6
    }
}
