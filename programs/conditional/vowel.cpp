// Write a program that takes a single character as input and checks if it is a vowel (a, e, i, o, u, A, E, I, O,
// U) or consonant. Display the result.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter a single character" ;
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "it is a vowel";
    } else {
        cout << " it is a consonant";
    }
    
    return 0;
}