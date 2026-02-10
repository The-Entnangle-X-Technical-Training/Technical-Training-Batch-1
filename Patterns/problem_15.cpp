// Problem 15: Horizontal Line of Stars
// * * * * * * * *
// Write a program that prints N stars in a horizontal line with spaces
#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout  << "* ";
    }

    return 0;
}