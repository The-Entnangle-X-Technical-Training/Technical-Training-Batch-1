//Write a program that takes N and calculates the sum: 1² + 2² + 3² + ... + N²

#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;

    cout << "enter a number";
    cin >> n;

    for (int i = 1; i <= n; i++){
       sum += i * i;
    }

    cout << "sum of sqaures from 1 to n" << n << "is: " << sum << endl;

    return 0;
}