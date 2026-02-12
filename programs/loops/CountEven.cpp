//Write a program that counts how many even numbers exist from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number";
    cin >> n;

    for (int i=2; i<=n; i+=2){
        cout << i << " ";
    }

    return 0;
}