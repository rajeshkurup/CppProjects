#include "./type_alias.h"
#include <iostream>

void print_array(dyn_arr<int> intArr) {

    std::cout << "[";
    bool firstTime = true;
    for(int i : intArr) {
        if(!firstTime) {
            std::cout << ", ";
        }
        std::cout << i;
        firstTime = false;
    }

    std::cout << "]" << std::endl;
}

int main() {

    std::cout << "================ Program to demonstrate Type Aliases ===============" << std::endl;

    dyn_arr<int> intList = {10, 12, 14, 16, 18, 20};

    print_array(intList);

    sptr<dyn_arr<int>> intListPtr(new dyn_arr<int>({22, 24, 26, 28, 30}));

    print_array(*intListPtr);

    std::cout << "ptr_count=" << intListPtr.use_count() << std::endl;

    {
        sptr<dyn_arr<int>> intArrPtr = intListPtr;

        print_array(*intArrPtr);

        std::cout << "ptr_count=" << intListPtr.use_count() << std::endl;
    }

    print_array(*intListPtr);

    std::cout << "ptr_count=" << intListPtr.use_count() << std::endl;

    return 0;
}