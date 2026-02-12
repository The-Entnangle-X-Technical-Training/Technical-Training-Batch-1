// Write a program that takes a number as input and displays whether it is even or odd.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int even = 0;
    int odd = 0;

    cout << "enter the number";
    cin >>  number;

    if (number % 2 == 0) {
        cout << "this is even number";
    } else {
        cout << "this is odd number";
    }

    return 0;
}