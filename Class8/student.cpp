#include <iostream>
#include "student.h"

Student::Student() {
    std::cout << "I am a student. Full of energy and hope." << endl;
}

Student::~Student() {
    std::cout << "When a student dies, the world weeps. Tragedy." << endl;
}