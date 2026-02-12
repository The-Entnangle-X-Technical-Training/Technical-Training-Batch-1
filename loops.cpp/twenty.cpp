//Write a program that takes a number and checks whether it is prime or not.

#include<iostream>
using namespace std;

int main() {

    int number, i, flag = 0;

    cout << "enter a number:";
    cin >> number;

    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

}