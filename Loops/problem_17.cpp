// Problem 17: Sum of Odd Numbers (1 to N)
// Write a program that calculates sum of all odd numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int SumOfOdd = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        if(i%2==1){
            SumOfOdd +=i;
        }
    }
    cout << "the sum of odd number to the n is : "<<SumOfOdd;
    return 0;
}
