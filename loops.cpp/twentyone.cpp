//Write a program that prints all numbers from 1 to N that are divisible by 3

#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "enter a number:";
    cin >> n;

    cout << "numbers from 1 to " << n << " that are divisible by 3:" << endl;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}