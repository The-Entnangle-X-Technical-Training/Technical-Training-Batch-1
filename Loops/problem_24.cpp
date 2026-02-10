// Problem 24: Print All Numbers Divisible by 3 (1 to N)
// Write a program that prints all numbers from 1 to N that are divisible by 3

#include <iostream>
using namespace std;

int main() {
    int N = 0;
    cout << "Enter a number N: ";
    cin >> N;

    cout << "Numbers from 1 to " << N ;
    cout << " that are divisible by 3:" << endl;
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}