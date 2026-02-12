//Write a program that takes a 2-digit number as input and displays it in reverse order (e.g., 45 becomes
//54).

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 2 digit number";
    cin >> num;

    int lastDigit = num % 10;
    int firstDigit = num / 10;

    int reverse = lastDigit * 10 + firstDigit;
    
    return 0;

}