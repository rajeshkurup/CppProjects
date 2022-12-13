#include "./ud_literals.h"
#include <iostream>

constexpr ull operator"" _KB(ull num) {
    return num * 1024;
}

constexpr ull operator"" _MB(ull num) {
    return num * 1024_KB;
}

constexpr ull operator"" _GB(ull num) {
    return num * 1024_MB;
}

constexpr ull operator"" _TB(ull num) {
    return num * 1024_GB;
}

constexpr ull operator"" _Hr(ull num) {
    return num * 60;
}

constexpr ull operator"" _Day(ull num) {
    return num * 24_Hr;
}

constexpr ull operator"" _Week(ull num) {
    return num * 7_Day;
}

constexpr ull operator"" _Year(ull num) {
    return num * 52_Week;
}

int main() {

    std::cout << "========= Program to demonstrate User Defined Literals ===========" << std::endl;

    std::cout << "24 Hrs in Seconds = " << 24_Hr << std::endl;

    std::cout << "1 Day in Seconds = " << 1_Day << std::endl;

    std::cout << "52 Weeks in Seconds = " << 52_Week << std::endl;

    std::cout << "1 Year in Seconds = " << 1_Year << std::endl;

    std::cout << "1024 KB in Bytes = " << 1024_KB << std::endl;

    std::cout << "1 MB in Bytes = " << 1_MB << std::endl;

    std::cout << "1024 MB in Bytes = " << 1024_MB << std::endl;

    std::cout << "1 GB in Bytes = " << 1_GB << std::endl;

    std::cout << "2 TB in Bytes = " << 2_TB << std::endl;

    return 0;
}
