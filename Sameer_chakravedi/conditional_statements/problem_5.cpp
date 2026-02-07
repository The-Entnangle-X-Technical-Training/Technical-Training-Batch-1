// Problem 5: Vowel or Consonant
// Write a program that takes a single character as input and checks if it is a vowel (a, e, i, o, u, A, E, I, O,
// U) or consonant. Display the result.

#include <iostream>
using namespace std;

int main(){
    char character =0;
    cout << "enter the character ";
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }
    return 0;


}