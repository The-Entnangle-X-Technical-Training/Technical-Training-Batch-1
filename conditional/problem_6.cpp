// Problem 6: Alphabet, Digit, or Special Character
// Write a program that takes a single character as input and checks if it is an alphabet (A-Z, a-z), digit (0-9),
// or special character. Display the result.

#include <iostream>
using namespace std;

int main(){
    char character = 0;
    cout << "enter the character: ";
    cin >>character;

    if((character >='a' && character <= 'z') ||(character >='A' && character <='z')){
        cout << character<< "it is alphabet";
    }
    else if(character >= '0' && character <= '9'){
        cout << character << " it is Digit";
            }
    else{
        cout << character << " it is a special character ";
    }
    return 0;
}