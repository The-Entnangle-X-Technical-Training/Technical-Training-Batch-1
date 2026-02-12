// Problem 13: Count Digits in a Number
// Write a program that takes a number and counts how many digits it has using a loop.
// Hint: Keep dividing by 10 until number becomes 0

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int count = 0;
    cout <<" Enter a number : ";
    cin >> number;
    while(number > 0){
        number = number / 10;
        count += 1;
    }
    cout << "the count of digits in the number is : "<<count;
    return 0;
}