#include <cmath>
#include <iostream>

long double factorial(int n) {
    long double factorial = 1.0;

    for (int i = 0; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

long long factorial2(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial2(n - 1);
}

int factorial3(int n) {
    return std::lgamma(n + 1);
}
