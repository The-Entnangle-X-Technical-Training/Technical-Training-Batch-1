// Problem 23: Print All Prime Numbers from 1 to N
// Write a program that takes a number N and prints all prime numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    cout <<" Enter a Number : ";
    cin >> Number;
    int temp = 1;

    while(Number >= temp){
        int count = 0;
    
        for(int i = 2; i < temp; i++){
            if(temp % i == 0){
                count++;
                break;
            }
        }
        if(count == 0 && temp > 1){
            cout << temp << " ";
        }
        temp++;
    }
    return 0;
}