// Problem 7: Uppercase or Lowercase
// Write a program that takes a single alphabet character and checks if it is uppercase or lowercase. Display
// the result.

#include <iostream>
using namespace std;

int main(){
    char character =0;
    cout << "enter the character : ";
    cin >> character;
    if(character >= 'a' && character <= 'z'){
        cout << character << " it is lowercase ";
    }
    else{
        cout <<character << " it is uppercase ";
    }
    return 0;
}