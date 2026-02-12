//Write a program that takes a number N and prints the first N even numbers (2, 4, 6, 8...)

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << 2 * i << " ";
    }

    return 0;
}
