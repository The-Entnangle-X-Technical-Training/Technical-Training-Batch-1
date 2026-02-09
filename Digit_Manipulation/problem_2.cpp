// Program 2: Remove Last Digit
// Write a program that takes a number as input and displays the number after removing its last digit

#include <iostream>
using namespace std;

int main() {
    int number =0;
    cout << "Enter a number: ";
    cin >> number;

    int result = number / 10;
    cout << "The number after removing the last digit is: " << result << endl;
    return 0;
}