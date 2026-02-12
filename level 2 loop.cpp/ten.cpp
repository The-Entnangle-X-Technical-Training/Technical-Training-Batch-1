//Write a program that checks if a number is an Armstrong number (sum of cubes of digits equals the
//number itself).
//Example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int sumOfCubes = 0;
    int temp = 0;

    cout << "enter a number";
    cin >> number;

    temp = number;

    while (temp != 0) {
        int lastDigit = temp % 10;
        sumOfCubes += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
    if (sumOfCubes == number) {
        cout << "number is an Armstrong number" << endl;
    } else {
        cout << "number is not an Armstrong number" << endl;
    }


    

}