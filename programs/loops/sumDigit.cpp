//Write a program that takes a number and calculates the sum of its digits.

#include <iostream>
using namespace std;

int main() {
    int n, digit, sum = 0;

    cout << "enter a number" ;
    cin >> n;

    while(n!=0){
        digit = n%10;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "the sum of digits is:" << sum;

    return 0;
}