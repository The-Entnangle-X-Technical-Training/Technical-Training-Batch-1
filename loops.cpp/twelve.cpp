//Write a program that counts how many even numbers exist from 1 to N.
#include<iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number : ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            count++;
        }
    }
    cout << "Number of even numbers from 1 to " << n << " is: " << count << endl;
}