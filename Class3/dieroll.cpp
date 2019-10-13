#include <iostream>
#include <cstdlib>

// rand() will always generate the same "random" sequence of integers
// srand() must be used to set the seed for a string of pseudo-random numbers
// Standard practice is to set srand(time(0)) as the seed, current time will always be different so each
// program call will produce different sequences

int main() {
    srand(time(0));
    int die_roll = (rand() % 6) + 1;
    std::cout << "Result: " << die_roll << std::endl;
}