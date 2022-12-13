#include <iostream>
#include <vector>

#define print std::cout
#define read std::cin
#define nline std::endl

using int_array = std::vector<int>;
using int_2d_array = std::vector<std::vector<int>>;

int y = 0;
auto print_array_value = [i = &y](auto val) mutable { 
    print << "arr[" << (*i)++ << "] = " << val << nline;
};

int x = 0;
auto print_array = [i = &x](auto arr) mutable { 
    for_each(arr.begin(), arr.end(), [&i, j = 0](auto val) mutable { 
        print << "arr[" << *i << "][" << j++ << "] = " << val << nline;
    });
    (*i)++;
};

int main() {

    print << "=========== Program to demonstrate lambda functions =============" << nline;

    int_array intArr = {45, 34, 23, 67, 89, 56, 23, 32, 87, 57};

    // print 1d array
    for_each(intArr.begin(), intArr.end(), [i = 0](int iVal) mutable { print << "intArr[" << i++ << "] = " << iVal << nline; });

    print << nline;

    y = 0;
    for_each(intArr.begin(), intArr.end(), [](auto val) { print_array_value(val); });

    print << nline << nline;

    y = 0;
    for_each(intArr.begin(), intArr.end(), [](auto val) { print_array_value(val); });

    print << nline;

    int_2d_array int2dArr = {{45, 34, 12, 67, 89, 56, 23, 32, 87, 57}, {15, 67, 93, 29, 10, 39, 90, 88, 44, 55}, {66, 33, 22, 11, 49, 59, 95, 85, 75, 77}};

    // print 2d array
    for_each(int2dArr.begin(), int2dArr.end(), [i = 0](int_array intSubArr) mutable { for_each(intSubArr.begin(), intSubArr.end(), [i, j = 0](int iVal) mutable { print << "int2dArr[" << i << "][" << j++ << "] = " << iVal << nline; }); i++; });

    print << nline;

    x = 0;
    for_each(int2dArr.begin(), int2dArr.end(), [](auto val) { print_array(val); });

    print << nline << nline;

    x = 0;
    for_each(int2dArr.begin(), int2dArr.end(), [](auto val) { print_array(val); });

    print << nline;

    return 0;
}