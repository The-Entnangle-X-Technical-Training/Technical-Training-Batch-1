// Problem 7: Sum of First N Natural Numbers
// Write a program that takes a number N and calculates the sum of first N natural numbers (1 + 2 + 3 + ... +
// N)

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int sum = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        sum += i;
    }
    cout << "the sum of first n natural numbers is : "<<sum;
    return 0;
}