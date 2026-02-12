//Write a program that takes two numbers N and M. Count how many multiples of M exist from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int N, M, count = 0;

    cout << "Enter N: ";
    cin >> N;
    cout << "Enter M: ";
    cin >> M;

    for (int i = 1; i <= N; i++) {
        if (i % M == 0) {
            count++;
        }
    }

    cout << "Count of multiples: " << count;

    return 0;
}
