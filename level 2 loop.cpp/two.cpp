//Write a program that takes a number N and calculates its factorial (N! = 1 × 2 × 3 × ... × N).

#include<iostream>
using namespace std;

int main() {
    int N;
    int factorial = 1;

    cout << "enter a number:";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << N << " is: " << factorial << endl;

}