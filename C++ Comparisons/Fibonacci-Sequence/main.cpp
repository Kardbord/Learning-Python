#include <iostream>
#include "FibNumber.h"

int main() {
    try {
        FibNumber fibNumber(150);
        fibNumber.printValue(std::cout);
    } catch (std::exception e) {
        std::cerr << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}