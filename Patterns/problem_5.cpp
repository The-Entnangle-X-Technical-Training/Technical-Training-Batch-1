// Problem 5: Right Triangle - Same Number Each Row
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// Write a program that prints this pattern for N rows

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << i<<" ";
        }
        cout << endl;
    }

    return 0;
}