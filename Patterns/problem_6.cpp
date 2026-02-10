// Problem 6: Print N Stars in One Line
// * * * * *
// Write a program that takes N and prints N stars in a single line.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout  << "* ";
    }

    return 0;
}
