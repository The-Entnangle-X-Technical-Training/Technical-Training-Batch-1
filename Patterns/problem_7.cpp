// Problem 7: Print N Rows of N Stars
// * * * *
// * * * *
// * * * *
// * * * *
// Write a program that prints N rows, each having N stars.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}