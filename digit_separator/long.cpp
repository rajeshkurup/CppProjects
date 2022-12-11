#include "./long.h"

Long::Long() : m_lval(0), m_strVal("") {
    // Empty
}

Long::Long(const long lval) : m_lval(lval), m_strVal("") {
    // Empty
}

Long::Long(const Long& lval) : m_lval(lval.m_lval), m_strVal("") {
    // Empty
}

const Long& Long::operator =(const Long& lval) {
    this->m_lval = lval;
    return *this;
}

const std::string& Long::toString() {
    this->m_strVal = std::to_string(this->m_lval);
    return this->m_strVal;
}

void Long::longValue(const std::string& lval) {
    this->m_lval = std::stol(lval);
}

Long::operator long() const {
    return this->m_lval;
}

Long::operator std::string() {
    return this->toString();
}

long Long::getValue() const {
    return this->m_lval;
}

void Long::setValue(const long lval) {
    this->m_lval = lval;
}

Long Long::operator +(const Long& lval) const {
    return this->m_lval + lval.getValue();
}

Long Long::operator -(const Long& lval) const {
    return this->m_lval - lval.getValue();
}

Long Long::operator *(const Long& lval) const {
    return this->m_lval * lval.getValue();
}

Long Long::operator /(const Long& lval) const {
    if(lval.getValue() == 0) {
        throw new std::invalid_argument("Division by zero is prohibited!");
    }

    return this->m_lval / lval.getValue();
}

Long& Long::operator *() {
    return *this;
}

Long* Long::operator ->() {
    return this;
}