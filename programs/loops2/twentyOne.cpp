//Write a program that takes a number and finds the largest digit in it using a loop

#include <iostream>
using namespace std;
int main() {
    int n, digit, largest= 0;

    cout << "enter a number:";
    cin >> n;

    while (n > 0){
        digit = n % 10;

        if (digit > largest) {
            largest = digit;
        }

        num = num / 10;
    }

    cout << "largest digit is:" << largest;

    return 0;

}

