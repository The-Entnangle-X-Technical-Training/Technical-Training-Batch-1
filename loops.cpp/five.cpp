//Write a program that takes N as input and prints the first N even numbers.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of even numbers to print: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << 2 * i << endl;

    }
}