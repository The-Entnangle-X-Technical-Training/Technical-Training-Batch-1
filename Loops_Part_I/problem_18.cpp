// Problem 18: Count Even and Odd Digits
// Write a program that takes a number and counts how many even digits and how many odd digits it
// contains.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int evenCount = 0;
    int oddCount = 0;
    cout <<" Enter a Number : ";
    cin >> Number;
    
    while(Number > 0){
        int digit = Number % 10; 
        if(digit % 2 == 0){
            evenCount++;
        }else if(digit % 2 == 1){
            oddCount++;
        }
        Number /= 10;
    }
    cout << "the count of even digits in the number is : "<<evenCount << endl;
    cout << "the count of odd digits in the number is : "<<oddCount;
    return 0;
}