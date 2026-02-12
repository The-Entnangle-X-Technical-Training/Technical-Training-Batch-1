//Write a program that takes a number N and calculates its factorial (N! = 1×2×3×...×N).

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = n-1; i > 0; i--) {
        n *= i;
    }
    cout << "factorial is: " << n << endl;
}