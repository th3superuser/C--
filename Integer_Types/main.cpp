#include <iostream>

int main() {
    // Braced initializers
    // Ints are 4 bytes on memory stack
    // Variable may contain random garbage value
    int elephant_count; // Uninitialized

    int lion_count{}; // Initializes to zero

    int dog_count {10}; // Initializes to 10

    int cat_count {20}; // Initializes to 20

    // Functional Initalization
    int bird_count(30);

    // Braced Initialization (preferred convention)
    int car_count{40};

    // Assignment Initialization
    int truck_count = 30;

    // Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    // Ex of narrowing conversion
    int bike_count (2.9); // Truncates to 2 

    // Output animal counts
    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animals: " << domesticated_animals << std::endl;

    std::cout << "size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "size of truck_count: " << sizeof(truck_count) << " bytes" << std::endl;


    return 0;
}