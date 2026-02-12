//Write a program that takes a number and counts how many even digits and how many odd digits it
//contains.

#include <iostream>
using namespace std;
int main() {
    int n, Evencount, oddCount, digit = 0;

    cout << "enter a number: ";
    cin >> n;

   while (n!=0){
    digit = digit % 10;
    if(digit % 2 == 0 ){
        evenCount++
    } else {
        oddCount ++;
    }
    n /= 10;
   }

   cout << "even digits" << evenCount << endl;
   cout << "odd digits" << oddCount << endl;

   return 0;

}