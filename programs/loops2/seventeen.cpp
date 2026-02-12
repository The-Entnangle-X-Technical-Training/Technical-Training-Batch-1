//Write a program that checks if a number is a palindrome (reads same forwards and backwards).

#include <iostream>
using namespace std;
int main() {
    int n, digit, reverse = 0;
    
    cout << "enter a number:";
    cin >> n;

    while (n!=0){
        digit = digit % 10;
        reverse = reverse * 10 + digit;
        n/=10;

        if (reverse == number){
            cout << "palindrome" << endl;
        }else {
            "not palindrome" << endl;
        }
    }
}