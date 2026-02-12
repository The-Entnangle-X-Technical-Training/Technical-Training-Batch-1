//Write a program that takes a number N and calculates its factorial (N! = 1 × 2 × 3 × ... × N)

#include <iostream>
using namespace std;
int main() {
    int n, factorial = 1;
    cout << "enter the number";
    cin >> n;

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "factorial = " << factorial << endl;
    return 0;

}