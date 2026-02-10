// Problem 2: Rectangle Pattern (M×N)
// * * * * *
// * * * * *
// * * * * *
// Write a program that takes M (rows) and N (columns) and prints a rectangle pattern

#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter number of rows (M): ";
    cin >> M;
    cout << "Enter number of columns (N): ";
    cin >> N;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}