#include <iostream>
#include <string>

int main(){
    
    
    //Printing Data
    std::cout << "Hello C++23 " << std::endl;
    
    int age {21};
    std::cout << "Age: " << age << std::endl;

    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0f; //Hexadecimal
    int number4 = 0b00001111; //Binary - only in C++14

    std::cout << "number 1: " << number1 << std::endl;
    std::cout << "number 2: " << number2 << std::endl;
    std::cout << "number 3: " << number3 << std::endl;    
    std::cout << "number 4: " << number4 << std::endl;

    //Error and log messages
    std::cerr << "Error message: " << std::endl;
    std::clog << "Log message: " << std::endl;

    

    //Declare variables for input
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    //std::cin >> name;
    //std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name 
        << ", you are " << age1 << " years old!" << std::endl;
    
    

    //Data input with spaces
    int age3;
    std::string full_name;

    std::cout << "Please type your full name and age " << std::endl;

    /*
        Want both to work without having to comment out the first std::cin? 
        Not working because std::cin is leaving \n in buffer and that is what 
        std::getline is reading first. Use std::cin.ignore() so it can ignore 
        the rest of the buffer (\n) that the first std::cin left.
        Remember, std::cin interprets every non-whitespace character and 
        std::getline() can contain spaces (use when reading an entire line ie 
        a string terminating with \n)

        std::cin.ignore() // ignores rest of buffer, can specify a numeric limit or an 'end' character
        std::cin.clear()  // clears error-bit on std::cin so it can go back to receiving more input
        fflush(stdin)     // a more c-like way of clearing a buffer [specifically a filestream buffer]

    */

    std::getline(std::cin.ignore(),full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name 
        << ", you are " << age3 << " years old!" << std::endl;
    
    return 0;
}