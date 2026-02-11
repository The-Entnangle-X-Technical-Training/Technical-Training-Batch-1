// Problem 3: Print First N Even Numbers
// Write a program that takes a number N and prints the first N even numbers (2, 4, 6, 8...).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        cout << 2*i << endl;
    }
    return 0;
}