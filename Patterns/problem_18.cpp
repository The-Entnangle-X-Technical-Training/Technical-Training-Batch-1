// Problem 18: Print Numbers 1 to N in Each Row
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// Write a program that prints M rows, each containing numbers 1 to N.

#include <iostream>
using namespace std;
int main() {
    int M =0;
    int N =0;
    
    cout << "Enter number of rows (M): ";
    cin >> M;
    cout << "Enter number of columns (N): ";
    cin >> N;

    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}