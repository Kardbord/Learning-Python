//
// Created by Tanner on 3/27/2017.
//

#ifndef FIBONACCI_SEQUENCE_FIBNUMBERS_H
#define FIBONACCI_SEQUENCE_FIBNUMBERS_H

#include <vector>
#include <ostream>

/**
 * Represents a number in the Fibonacci sequence. Only tested to 150.
 * Fib nums get real big real fast, and only 128 bits are available to display them,
 * so basically this class is almost certainly inaccurate past a certain point.
 */
class FibNumber {
public:
    FibNumber(unsigned int const &index);

    __uint128_t getFib(unsigned int const &index);

    __uint128_t getValue() { return m_value; }

    unsigned int getId() { return m_id; }

    void printValue(std::ostream &out);

private:
    const __uint128_t M_FIBZERO = 0;
    const __uint128_t M_FIBONE = 1;

    unsigned int m_id;
    __uint128_t m_value;

    std::vector<__uint128_t> m_calculatedNumbers = {M_FIBZERO, M_FIBONE};

    void printValue(__uint128_t const & value);
};

#endif //FIBONACCI_SEQUENCE_FIBNUMBERS_H
