#include <iostream>
#include "./integer.h"
#include "./uint.h"

#define print std::cout
#define read std::cin
#define nline std::endl

int main() {

    print << "========= Program to demonstrate delegate and delete features ============" << nline;

    print << "Integer" << nline;

    {
        Integer x1;
        Integer x2(10);
        Integer x3 = 100;
        Integer x4 = 1000;
        
        print << "x1 = " << x1 << nline;

        x1 = x3;

        print << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << ", x4 = " << x4 << nline;

        x1 = x2 + x3 + x4;

        print << "x1 = " << x1 << nline;

        x1++;

        print << "x1 = " << x1 << nline;

        x1--;

        print << "x1 = " << x1 << nline;

        ++x1;

        print << "x1 = " << x1 << nline;

        --x1;

        print << "x1 = " << x1 << nline << nline;

        print << "x1 = " << x1++ << nline;

        print << "x1 = " << x1 << nline;

        print << "x1 = " << --x1 << nline;

        print << "x1 = " << x1 << nline;
    }

    print << nline << "UInt" << nline;

    {
        UInt x1(10000);
        UInt x2(10);
        UInt x3 = 100;
        UInt x4 = 1000;
        
        // UInt x5 = x3; Not allowed
        
        print << "x1 = " << x1 << nline;

        // x1 = x3; Not allowed

        print << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << ", x4 = " << x4 << nline;

        // x1 = x2 + x3 + x4; Not allowed

        print << "x1 = " << x1 << nline;

        x1++;

        print << "x1 = " << x1 << nline;

        x1--;

        print << "x1 = " << x1 << nline;

        ++x1;

        print << "x1 = " << x1 << nline;

        --x1;

        print << "x1 = " << x1 << nline << nline;

        print << "x1 = " << x1++ << nline;

        print << "x1 = " << x1 << nline;

        print << "x1 = " << --x1 << nline;

        print << "x1 = " << x1 << nline;
    }

    return 0;
}