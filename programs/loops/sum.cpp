//Write a program that takes a number N and calculates the sum of first N natural numbers (1 + 2 + 3 + ... +
//N).

#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i<=n ; i++) {
        sum += i;
    }

    cout << "sum of first " << n << "natural numbers" << sum << endl;

    return 0;

}