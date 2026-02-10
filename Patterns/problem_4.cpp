// Problem 4: Right Triangle - Numbers (Rows)
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// Write a program that prints this number pattern for N rows

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}
