//Write a program that calculates sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "enter number";
    cin >> n;

    for (int i=1; i<=n; i++){
       if (i % 2 == 0){
        sum += i;
       }
    }

    cout << "sum of even numbers from 1 to " << n << " " << sum;

    return 0;
}