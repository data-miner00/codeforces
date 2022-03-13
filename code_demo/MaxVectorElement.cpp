#include <iostream>

int main()
{
    // Get the vector
    std::vector<int> a = { 1, 45, 54, 71, 76, 12 };
  
    // Print the vector
    std::cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
  
    // Find the max element
    std::cout << "\nMax Element = "
         << *max_element(a.begin(), a.end());
    return 0;
}