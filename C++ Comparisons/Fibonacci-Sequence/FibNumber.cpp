//
// Created by Tanner on 3/27/2017.
//

#include "FibNumber.h"
#include <stdexcept>
#include <iostream>

__uint128_t FibNumber::getFib(unsigned int const &index) {

    if (index < m_calculatedNumbers.size()) return m_calculatedNumbers[index];

    else {
        m_calculatedNumbers.push_back(getFib(index - 1) + getFib(index - 2));
        return m_calculatedNumbers[index];
    }
}

FibNumber::FibNumber(unsigned int const &index) : m_id(index) {

    if (m_id < 0) throw std::out_of_range("Invalid Fib index -- cannot be less than 0");

    m_value = getFib(m_id);
}

void FibNumber::printValue(std::ostream &out) {
    printValue(m_value);
}

void FibNumber::printValue(__uint128_t const &value) {
    if (value == 0) {
        return;
    }

    printValue(value / 10);
    putchar((int) (value % 10 + 0x30));
}
