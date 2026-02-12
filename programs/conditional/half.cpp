//Write a program that takes an alphabet character (A-Z or a-z) and displays if it falls in first half (A-M) or
//second half (N-Z) of alphabets

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if((ch >= 'A' && ch <= 'M') || (ch >= 'a' && ch <= 'm')) {
        cout << "Alphabet is in First half (A-M)";
    }
    else if((ch >= 'N' && ch <= 'Z') || (ch >= 'n' && ch <= 'z')) {
        cout << "Alphabet is in Second half (N-Z)";
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
