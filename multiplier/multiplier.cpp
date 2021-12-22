#include <iostream>

#include "multiplier.h"


int multiplyNum(int a, int b) {
    #ifdef NDEBUG
    std::cout << "Greet Release!" <<std::endl;
    #else
    std::cout << "Greet debug!" <<std::endl;
    #endif
}
