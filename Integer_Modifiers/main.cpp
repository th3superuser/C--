#include <iostream>

int main() {

    // type with modifier, then 4 bytes in memory, then the range is 
    // 0 to 4,294,967,295
    unsigned int a = 0; 

    // type with modifier, then 4 bytes in memory, then the range is 
    // -2,147,483,647 to 2,147,483,647
    signed int b = 0; 

    // another type modifier (only applies with integral types)
    short int c{0}; // 2 bytes in memory
    int e{0}; // 4 bytes in memory
    long long int d{0}; // 8 bytes in memory

    std::cout << "The size of an unsigned int is " << sizeof(a) << " bytes." << std::endl;
    std::cout << "The size of a signed int is " << sizeof(b) << " bytes." << std::endl;
    std::cout << "The size of a 'short' int is " << sizeof(c) << " bytes." << std::endl;
    std::cout << "The size of a int is " << sizeof(e) << " bytes." << std::endl;
    std::cout << "The size of a 'long' int is " << sizeof(d) << " bytes." << std::endl;

    // Testing
    long long_var {15}; 
    
    std::cout << "\n *****TESTING***** \n" << std::endl;
    std::cout << "The size of long int is " << sizeof(long_var) << " bytes." << std::endl;

    return 0;
}