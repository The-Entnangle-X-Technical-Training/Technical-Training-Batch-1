// Problem 11: Continuous Number Pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// Write a program that prints continuous numbers in triangle pattern for N rows

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    int num = 1;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;

}