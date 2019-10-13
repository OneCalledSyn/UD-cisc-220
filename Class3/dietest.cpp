#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int die_roll () {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(0));
    
    int distribution[6] = {0,0,0,0,0,0};
    int die_value = 0;
    
    for (int i = 0; i < 2000; i++) {
        die_value = die_roll();
        distribution[die_value - 1]++; 
    };

    for (int j = 1; j <= 6; j++) {
        
        cout << "Rolled a " << j << " " << distribution[j-1] << " times out of 2000 rolls.\n";
    };
}    