// Program 17: Count Even Digits in a Number
// Write a program that takes a 4-digit number as input and counts how many of its digits are even, then
// displays the count.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;
    int evenDigitCount = 0;
    if (firstDigit % 2 == 0) {
        evenDigitCount++;
    }
    if(secondDigit %2 == 0){
        evenDigitCount ++;
    }
    if(thirdDigit %2==0){
        evenDigitCount ++;
    }
    if(fourthDigit %2 == 0){
        evenDigitCount++;
    }
    cout << "The count of even digits is: " << evenDigitCount << endl;

    return 0;
}
