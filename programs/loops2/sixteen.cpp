//Write a program that takes a number and calculates the product of all its digits using a loop.

#include <iostream>
using namespace std;
int main() {
    int n, digit, product = 1;

    cout << "enter a number:";
    cin >> n;

    while(n!=0){
        digit = digit % 10;
        product = product * digit;
        n/=10; 
    }
}