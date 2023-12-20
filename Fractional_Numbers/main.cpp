#include <iostream>
#include <iomanip>
#include <limits>

int main() {

    float a {1.12345678901234567890f};
    double b {1.12345678901234567890};
    long double c {1.12345678901234567890L};

    // Print out some sizes
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(10);
    std::cout << "a is " << a << std::endl; // 7 digits
    std::cout << "b is " << b << std::endl; // 15'ish digits
    std::cout << "c is " << c << std::endl; // 15 digits

    std::cout << std::setprecision(5) << 3.124897 << std::endl; // 3.1249
    int d = std::numeric_limits<float>::digits10; // precision is now 6 for float
    std::cout << std::setprecision(d) << 3.14159f << std::endl; // 3.14159

    return 0;
}