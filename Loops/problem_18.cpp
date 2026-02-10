// Problem 18: Factorial of a Number
// Write a program that takes a number N and calculates its factorial (N! = 1×2×3×...×N)

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int ans =1;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number;i++){
        ans = i *ans;
    }
    cout << ans;
    return 0;
}
