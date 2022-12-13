#include "./integer.h"
#include <stdexcept>

Integer::Integer(int iVal) : m_iVal(iVal) {
    // Empty
}

// Deligation - using another constructor
Integer::Integer() : Integer(0) {
    // Empty
}

Integer::Integer(const Integer& iVal) : m_iVal(iVal.m_iVal) {
    // Empty
}

Integer Integer::operator =(const Integer& iVal) {
    this->m_iVal = iVal.m_iVal;
    return *this;
}

Integer::operator int() const {
    return this->m_iVal;
}

Integer Integer::operator +(const Integer& iVal) const {
    return this->m_iVal + iVal.m_iVal;
}

Integer Integer::operator -(const Integer& iVal) const {
    return this->m_iVal - iVal.m_iVal;
}

Integer Integer::operator *(const Integer& iVal) const {
    return this->m_iVal * iVal.m_iVal;
}

Integer Integer::operator /(const Integer& iVal) const {
    if(iVal.m_iVal == 0) {
        throw new std::invalid_argument("Division by zero is prohibited!");
    }

    return this->m_iVal / iVal.m_iVal;
}

const Integer& Integer::operator ++() {
    ++this->m_iVal;
    return *this;
}

const Integer& Integer::operator --() {
    --this->m_iVal;
    return *this;
}

Integer Integer::operator ++(int) {
    return this->m_iVal++;
}

Integer Integer::operator --(int) {
    return this->m_iVal--;
}
