// Problem 8: Sum of First 10 Numbers
// Write a program that calculates the sum of first 10 natural numbers (1+2+3+...+10).

#include <iostream>
using namespace std;

int main(){
    int sumOFNumber = 0;
    for(int i = 1 ; i <=10 ; i++){
        sumOFNumber += i;
    }
    cout<< "sum of first 10 natural number : "<< sumOFNumber;
    return 0;
}
