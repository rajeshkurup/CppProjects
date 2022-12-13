#include <iostream>

#define print std::cout
#define nline std::endl
#define read std::cin

using ull = unsigned long long;

// Compile time evaluation whereever possible otherwise normal function
constexpr ull factorial(int num) {
    return (num <= 1) ? 1 : (num * factorial(num - 1));
}

int main() {

    print << "========= Program to demonstrate constexpr ==========" << nline;

    print << "Factorial(10) = " << factorial(10) << nline;

    print << "Factorial(3) = " << factorial(3) << nline;

    int n = 9;

    print << "n = " << n << ", Factorial(n) = " << factorial(n) << nline;

    int x;
    print << "Input number to find Factorial: ";
    read >> x;

    print << "x = " << x << ", Factorial(x) = " << factorial(x) << nline;    

    return 0;
}