//Write a program that takes a number and prints it in reverse using a loop

#include <iostream>
using namespace std;
int main() {

    int n, digit, reverse = 0;

    cout << "enter a number:";
    cin >> n;

    while (n!=0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n/=10;
    }

    cout << "reversed number" << reverse << endl;

    return 0;

}