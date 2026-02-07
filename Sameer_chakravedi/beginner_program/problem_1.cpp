// Problem 1: Variable Update and Display
// Write a program that declares an integer variable with initial value 10, updates it to 20, then adds 5 to it,
// then multiplies by 2, and prints the value after each update

#include <iostream>
using namespace std;

int main() {
    
    int a = 10;
    cout << "The value of a is: " << a << endl;
    a = 20;
    cout << "The value of a is: " << a << endl;
    a += 5; 
    cout << "The value of a is: " << a << endl;
    a *= 2;
    cout << "The value of a is: " << a << endl;

    return 0;
}