#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <vector>
#include <string>

using _uint_ = __uint64_t;


// Calculates the n-th number in the fibonacci sequence
//
// param n : the n-th number in the fibonacci sequence to calculate
// return  : the n-th number in the fibonacci sequence
_uint_ recursiveFib(int const & n) {
    if (n < 0) {
        throw std::invalid_argument(
            "Invalid Argument in recursiveFib: argument is less than 0"
        );
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

// Calculates the n-th number in the fibonacci sequence
//
// param n : the n-th number in the fibonacci sequence to calculate
// return  : the n-th number in the fibonacci sequence
_uint_ dynamicFib(int const & n) {
    if (n < 0) {
        throw std::invalid_argument(
            "Invalid Argument in dynamicFib: argument is less than 0"
        );
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    std::vector<_uint_> fib(n + 1, 0);
    fib[0] = 0;
    fib[1] = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib [i - 2];
    }
    return fib[n];
}

/////////////////////////////////////////////////////
//                                                 //
//          Command Line Arguments                 //
// 1. The n-th fibonacci number to calculate using //
//    both the recursive and dynamic method        //
// 2. ...                                          //
// .                                               //
// .                                               //
// .                                               //
//                                                 //
/////////////////////////////////////////////////////
int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout
                << "Provide a number or numbers to run the fibonacci algorithms on."
                << std::endl;
        return EXIT_FAILURE;
    }

    for (unsigned int i = 1; i < argc; ++i) {
        try {
            long long n = std::stoull(argv[i]);
            std::cout << "recursiveFib(" << n << "): " << recursiveFib(n) << std::endl;
            std::cout << "dynamicFib(" << n << "): " << recursiveFib(n) << std::endl;
            std::cout << std::endl;
        }
        catch (std::exception e) {
            std::cout << argv[i] << " is not a valid input" << std::endl;
            std::cout << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
