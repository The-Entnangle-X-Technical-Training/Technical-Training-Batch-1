// Problem 12: Reverse Numbers Pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// Write a program that prints reverse numbers in each row for N rows.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter the number of rows: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int j=0 ; j <i; j++){
            cout << i-j << " ";
        }
        cout << endl;
    }
    return 0;
}