#include <iostream>
#include <cstdlib>

// rand() will always generate the same "random" sequence of integers
// srand() must be used to set the seed for a string of pseudo-random numbers
// Standard practice is to set srand(time(0)) as the seed, current time will always be different so each
// program call will produce different sequences

int main() {
    std::cout << "rand() Generates a number from 0 to RAND_MAX" 
              << RAND_MAX << std::endl;
    std::cout << "Result: " << rand() << std::endl;
}