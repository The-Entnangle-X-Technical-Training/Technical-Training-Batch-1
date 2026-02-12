//Write a program that takes N and calculates the sum: 1² + 2² + 3² + ... + N²

#include<iostream>
using namespace std;

int main() {

    int number, sum = 0;
    cout << "enter a number:";
    cin >> number;

    for (int i = 1; i <= number; ++i) {
        sum += i * i;
    }
    cout << "sum of squares from 1 to" << number << " is:" << sum << endl;
}