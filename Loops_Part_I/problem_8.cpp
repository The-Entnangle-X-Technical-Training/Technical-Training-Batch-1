// Problem 8: Sum of First N Even Numbers
// Write a program that takes a number N and calculates the sum of first N even numbers

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int sum = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        sum += 2*i;
    }
    cout << "the sum of first n even numbers is : "<<sum;
    return 0;
}