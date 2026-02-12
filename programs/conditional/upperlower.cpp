// Write a program that takes a single alphabet character and checks if it is uppercase or lowercase. Display
// the result

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter a single character" ;
    cin >> ch;

    if ( ch >='A' && ch <= 'Z') {
        cout << "it is a upper case";
    } else {
        cout << " it is lower case";
    }

    return 0 ;

}