//Write a program that takes a 3-digit number, calculates the sum of its digits, and checks if the number is
//divisible by this sum. Example: 153 → 1+5+3=9, 153÷9=17 → Harshad Number. Display "Harshad
//Number" or "Not Harshad Number".

#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }

    if (num % sum == 0) {
        cout << "Harshad Number";
    } else {
        cout << "Not Harshad Number";
    }

    return 0;
}