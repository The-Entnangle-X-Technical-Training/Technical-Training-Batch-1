//Write a program that takes a single character as input and checks if it is an alphabet (A-Z, a-z), digit (0-9),
// or special character. Display the result.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter a single character" ;
    cin >> ch;

    if ((ch >='a' && ch <='z') || (ch>='A' && ch <='Z')) {
        cout << "it is a alphabet";
    } else if (ch >= '0' && ch <= '9') {
        cout << "it is a digit";
    } else {
        "it is a special character";
    }

    return 0;
 
}   
