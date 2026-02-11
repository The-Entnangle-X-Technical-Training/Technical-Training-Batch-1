// Problem 4: Print First N Odd Numbers
// Write a program that takes a number N and prints the first N odd numbers (1, 3, 5, 7...).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        cout << 2*i - 1 << endl;
    }
    return 0;
}