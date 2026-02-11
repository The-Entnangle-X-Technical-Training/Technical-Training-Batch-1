// Problem 2: Print N to 1
// Write a program that takes a number N as input and prints all numbers from N to 1 in reverse order

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = number  ; i >=1 ; i--){
        cout << i << endl;
    }
    return 0;
}