// Problem 10: Print 1 to N, N Times
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// Write a program that prints numbers 1 to N in each row, for N rows.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}