// Problem 19: Print Squares of First 10 Numbers
// Write a program that prints squares of numbers from 1 to 10 (1², 2², 3²...).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
       cout << i *i <<" " ; 
    }
    return 0;
}

