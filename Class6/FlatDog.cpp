#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Dog {
    private:
      string name;
    public:
      Dog(string in_name){
          this->name = in_name;
      }
};

void run_over(Dog a_dog){
    cout << "OMG! I think I just ran over a dog." << endl;
}

void run_over(int x){
    cout << x + 1 << endl;
}

int main() {
    run_over(23);
    
    Dog fido("Fido");
    
    run_over(fido);
}

//Example of overloading function names