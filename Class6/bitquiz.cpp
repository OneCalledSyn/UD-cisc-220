#include <iostream>
#include <cstdlib>
#include <bitset>
using namespace std;

int main() {
    
    int patterns[2] = {
        0b11110000110100001111000011110000,
        0b00001111000011110000111100001001
    };
    
    void *p2chunk = (void *)malloc(32);
    
    for(int i = 0; i < 8; i++){
        *( ( (int *) p2chunk ) + i) = patterns[ i % 2 ];
    }
    
    cout << "pattern1 on top of pattern0:" << endl;
    cout << bitset<64>( *( (long*) p2chunk) ) << endl;
    
    ((char *) p2chunk)[1] = 'B';
    
    ((char *) p2chunk)[4] = 'N';
    
    cout << "byte1 is B byte4 is N:" << endl;    
    cout << bitset<64>( *( (long*) p2chunk) ) << endl;
    
    char bottom = *( (char *) p2chunk);
    char top = *( ( (char *) p2chunk ) + 1);
    
    char new_char = ((bottom >> 3) & (0b11111111 >> 3)) | ( top & 7 ) << 5;
    
    cout << "which bits are these?:" << endl; 
    cout << bitset<8>( new_char ) << endl;
    free(p2chunk);
}