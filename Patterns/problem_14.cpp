// Problem 14: Print Multiplication Table in Grid
// 1  2  3  4
// 2  4  6  8
// 3  6  9  12
// 4  8  12 16
// Write a program that prints 4×4 multiplication table grid

#include <iostream>
using namespace std;

int main() {
    int N = 4;
    // cout << "Enter number of rows (N): ";
    // cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}