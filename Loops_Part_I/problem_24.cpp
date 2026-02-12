// Problem 24: Count Prime Numbers (1 to N)
// Write a program that takes a number N and counts how many prime numbers exist from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int temp = 1;
    int countOfPrimes = 0;
    cout <<" Enter a Number : ";
    cin >> Number;

    while(Number >= temp){
        int count = 0;
    
        for(int i = 2; i < temp; i++){
            if(temp % i == 0){
                count++;
                break;
            }
        }
        if(count == 0 && temp > 1){
            countOfPrimes++;
        }
        temp++;
    }
    cout << "the count of prime numbers from 1 to "<<Number<<" is : "<<countOfPrimes;
    return 0;
}