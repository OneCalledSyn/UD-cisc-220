#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void pizzapractice() {
    string pizza("Delicious!");
    
    cout << "The initial string is: ";
    cout << pizza << endl;
    
    string *ptr;
    
    ptr = &pizza;
    
    cout << ptr << endl;
    //cout << &pizza << endl;
    
}

int main() {
    pizzapractice();
}