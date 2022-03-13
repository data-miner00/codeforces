#include <iostream>
#include <algorithm>

int main() {
    // Get the vector
    std::vector<int> a = { 1, 45, 54, 71, 76, 12 };
 
    // Print the vector
    std::cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
 
    // Reverse the vector
    reverse(a.begin(), a.end());
 
    // Print the reversed vector
    std::cout << "Reversed Vector: ";
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
 
    return 0;
}