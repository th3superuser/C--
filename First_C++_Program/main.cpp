#include <iostream>

consteval int get_value(){
    return 3;
}

//Entry point main function
int main(){

    /*
        Multi-line block comment
        Another line
        And another
    */

    //One line comment
    constexpr int value = get_value();
    std::cout << "value: " << value << std::endl;
    std::cout << "Hello World!" << std::endl;
    return 0;
}