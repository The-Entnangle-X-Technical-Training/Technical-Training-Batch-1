//Write a program that takes a number and counts how many even digits and how many odd digits it
//contains.

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int evenCount = 0;
    int oddCount = 0;

    cout << "enter a number";
    cin >> number;

    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        number = number / 10;
    }
    cout << "even digits: " << evenCount << endl;
    cout << "odd digits: " << oddCount << endl;
}