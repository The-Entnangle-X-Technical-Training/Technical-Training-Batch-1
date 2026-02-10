// Problem 7: Print First N Odd Numbers
// Write a program that takes N as input and prints the first N odd numbers

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        if(i %2==1){
            cout << i << " ";
        }
    }
    return 0;
}