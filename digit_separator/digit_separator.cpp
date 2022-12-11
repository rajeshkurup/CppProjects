#include <iostream>
#include "./long.h"

int main() {

    std::cout << "======================= Digit Separator Example ========================" << std::endl;

    Long x1 = 1'000'000; // Digit Separator example
    Long x2 = 1'000; // Digit Separator example

    Long x3 = x1 + x2;

    long x4 = (long)x1 + (long)x2;

    std::string x5 = (std::string)x1 + (std::string)x2;

    std::cout << "Long operation: " << x1 << " + " << x2 << " = " << x3 << std::endl;

    std::cout << "long operation: " << x1 << " + " << x2 << " = " << x4 << std::endl;

    std::cout << "string operation: " << x1 << " + " << x2 << " = " << x5 << std::endl;

    return 0;
}