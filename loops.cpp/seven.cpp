//Write a program that calculates the sum of first 10 natural numbers (1+2+3+...+10)

#include<iostream>
using namespace std;

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum of first 10 natural numbers is: " << sum << endl;
    
}