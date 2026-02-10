// Problem 16: Sum of Even Numbers (1 to N)
// Write a program that calculates sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int SumOfEven = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        if(i%2==0){
            SumOfEven += i;
        }
    }
    cout << "the Sum of even number to the n is : "<<SumOfEven;
    return 0;
}