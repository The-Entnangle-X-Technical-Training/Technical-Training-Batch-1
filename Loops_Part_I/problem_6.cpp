// Problem 6: Count Multiples
// Write a program that takes two numbers N and M. Count how many multiples of M exist from 1 to N.
// Example: If N=20 and M=3, multiples are 3, 6, 9, 12, 15, 18, so count = 6

#include <iostream>
using namespace std;

int main(){
    int N = 0;
    int M = 0;
    int count = 0;

    cout <<" Enter a number N : ";
    cin >> N;
    cout <<" Enter a number M : ";
    cin >> M;

    for(int i = 1 ; i <= N ; i++){
        if(i % M == 0){
            cout << i << " ";
            count += 1;
        }
    }
    cout << "\nCount of multiples of " << M << " from 1 to " << N << " is: " << count;
    return 0;
}