//Write a program that takes a number N as input and prints all numbers from 1 to N

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number:";
    cin >> n;

    for (int i =1 ; i<=n ; i++) {
        cout << i << endl;
    }
}