// Program 6: Reverse a 2-Digit Number
// Write a program that takes a 2-digit number as input and displays it in reverse order (e.g., 45 becomes
// 54)

#include <iostream>
using namespace std ;

int main(){
    int number = 0;
    int reverse = 0;
    cout << " Enter the 2 digit number : ";
    cin >> number;
    reverse = (number/10) + (number %10)*10;
    cout << " Reverse number of 2  digit : "<< reverse;
    return 0;

}