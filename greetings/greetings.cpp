#include <iostream>

#include "greetings.h"


void greetHim() {
    #ifdef NDEBUG
    std::cout << "Greet Release!" <<std::endl;
    #else
    std::cout << "Greet debug!" <<std::endl;
    #endif
	
	return a + b;
}
