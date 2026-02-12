//Write a program that takes a number and calculates the sum of its digits using a loop.

#include <iostream>
using namespace std;
int main() {
    int n, digit, sum = 0;

    cout << "enter a number:";
    cin >> n;

    while(n!=0){
       digit = n%10;
       sum += digit;
       n /= 10;
        
    }

    cout << "sum of its digit is: " << digit << endl;

    return 0;

}