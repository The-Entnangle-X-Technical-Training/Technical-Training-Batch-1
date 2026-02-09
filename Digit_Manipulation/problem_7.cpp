// Program 7: Reverse a 3-Digit Number
// Write a program that takes a 3-digit number as input and displays it in reverse order (e.g., 456 becomes
// 654).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int reverse = 0;
    cout << " Enter the 3 - Digit number : ";
    cin >> number;
    reverse = (number /100) + (number%10)*100 + ((number / 10)%10)*10;
    cout << " Reverse number of 3 - Digit : "<< reverse;

    return 0;
}