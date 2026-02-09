// Program 11: Check if Last Digit is Even
// Write a program that takes any number as input and checks whether its last digit is even or odd, then
// displays the result.

#include <iostream>
using namespace std;

int main() {
    int number =0;
    cout << "Enter a number: ";
    cin >> number;

    int lastDigit = number %10;
    if(lastDigit % 2 == 0){
        cout << "The last digit is even." << endl;
    } else {
        cout << "The last digit is odd." << endl;
    }
    return 0;
}
