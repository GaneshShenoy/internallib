#include <iostream>

#include "calculator.h"


int addNumber(int a, int b) {
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
	
	return a + b;
}
