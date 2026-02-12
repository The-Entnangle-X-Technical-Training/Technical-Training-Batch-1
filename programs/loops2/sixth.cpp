////Write a program that takes two numbers N and M. Count how many multiples of M exist from 1 to N.
//Example: If N=20 and M=3, multiples are 3, 6, 9, 12, 15, 18, so count = 6

#include <iostream>
using namespace std;
int main() {
    int n, m, count = 0;

    cout << "enter n and m";
    cin >> n >> m;

    for (int i = 1; i<=n; i++) {
        if ( i % m == 0) {
            count ++;
        }
    }
    cout << "multiples are: " << count;

    return 0;
}