//Write a program that takes a number N and calculates its factorial (N! = 1×2×3×...×N).

#include<iostream>
using namespace std;

int main() {
    int n, factorical = 1;
    cout << " enter a number :";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorical *= i;
    }
    cout << "factorical of " << n << " is:" << factorical << endl;
    
}