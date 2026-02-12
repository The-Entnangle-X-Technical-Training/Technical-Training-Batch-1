// Write a program that takes a single character as input and checks if it is a vowel (a, e, i, o, u) or
// consonant.
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

   
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Vowel";
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Consonant";
    } 
    else {
        cout << "Not an alphabet character";
    }

    return 0;
}