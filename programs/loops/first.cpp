//Write a program that takes a number N and calculates the sum of first N even numbers

#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout << "enter a number: ";
    cin >> n;

    for (int i=1; i <= n; i ++) {
        sum += 2 * i;
    }
    cout << "sum of first " << n << "even numbers" << sum << endl;

    return 0;
}
