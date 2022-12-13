#include <iostream>

#define tweet std::cout
#define nline std::endl

using UInt = uint32_t;
using String = std::string;

enum class FunctionStatus : UInt {
    SUCCESS = 0,
    SYSTEM_ERROR = 1,
    INPUT_ERROR = 2,
    EXCEPTION = 3,
    WARNING = 4
};

enum class HttpStatusGroup : char {
    SUCCESS = '2',
    SERVER_ERROR = '5',
    CLIENT_ERROR = '4',
    NETWORK_ERROR = '0',
    IN_PROGRESS = '1'
};

enum class PPServiceRC : UInt {
    INTERNAL_ERROR = 1001,
    DATABASE_ERROR = 2001,
    TIMEOUT_ERROR = 3001,
    PAYMENT_ERROR = 4001
};

void printEnum(auto enumVal) {
    tweet << "Enum Value = " << enumVal << nline;
}

int main() {

    tweet << "============== Program to demonstrate Strongly Typed Enums ===============" << nline;

    FunctionStatus funcStat = FunctionStatus::INPUT_ERROR;
    HttpStatusGroup httpStat = HttpStatusGroup::IN_PROGRESS;
    PPServiceRC servRc = PPServiceRC::TIMEOUT_ERROR;

    tweet << "FunctionStatus = " << (UInt)funcStat << ", HttpStatusGroup = " << (char)httpStat << ", PPServiceRC = " << (UInt)servRc << nline;

    return 0;
}