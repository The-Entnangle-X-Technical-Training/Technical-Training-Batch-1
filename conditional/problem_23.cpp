// Problem 23: Character Position in Alphabet (First or Second Half)
// Write a program that takes an alphabet character (A-Z or a-z) and displays if it falls in first half (A-M) or
// second half (N-Z) of alphabets

#include <iostream>
using namespace std;

int main(){
    char ch = 0;
    cout << "enter a alphabet character ";
    cin >> ch;
    if((ch >='a' && ch <='m')||(ch >='A' && ch <='M')){
        cout <<ch <<" it falls in the first half (A-M) ";
    }else if((ch >='n' && ch <='z')||(ch >='N' && ch <='Z')){
        cout <<ch <<" it falls in the Second half (A-M) ";
    }else{
        cout<<"invalid alphabet";
    }
    return 0;
}