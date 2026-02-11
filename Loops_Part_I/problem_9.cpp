// Problem 9: Sum of First N Odd Numbers
// Write a program that takes a number N and calculates the sum of first N odd numbers.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int sum = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        sum += 2*i - 1;
    }
    cout << "the sum of first n odd numbers is : "<<sum;
    return 0;
}