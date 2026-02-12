//Write a program that takes a number N and calculates its factorial (N! = 1 × 2 × 3 × ... × N).

#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;

    cout << "enter a number ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << "factorial of" << n << "=" << fact;
    return 0;

}