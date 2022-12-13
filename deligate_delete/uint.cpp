#include "./uint.h"
#include <stdexcept>

UInt::UInt(int iVal) : m_iVal(iVal) {
    // Empty
}

// Deligation - using another constructor
UInt::UInt() : UInt(0) {
    // Empty
}

UInt::operator int() const {
    return this->m_iVal;
}

UInt UInt::operator +(const UInt& iVal) const {
    return this->m_iVal + iVal.m_iVal;
}

UInt UInt::operator -(const UInt& iVal) const {
    return this->m_iVal - iVal.m_iVal;
}

UInt UInt::operator *(const UInt& iVal) const {
    return this->m_iVal * iVal.m_iVal;
}

UInt UInt::operator /(const UInt& iVal) const {
    if(iVal.m_iVal == 0) {
        throw new std::invalid_argument("Division by zero is prohibited!");
    }

    return this->m_iVal / iVal.m_iVal;
}

const UInt& UInt::operator ++() {
    ++this->m_iVal;
    return *this;
}

const UInt& UInt::operator --() {
    --this->m_iVal;
    return *this;
}

UInt UInt::operator ++(int) {
    return this->m_iVal++;
}

UInt UInt::operator --(int) {
    return this->m_iVal--;
}
