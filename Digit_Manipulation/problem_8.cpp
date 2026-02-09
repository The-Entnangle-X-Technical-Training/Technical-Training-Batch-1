// Program 8: Swap First and Last Digit of 3-Digit Number
// Write a program that takes a 3-digit number as input and swaps its first and last digits, then displays the
// result (e.g., 456 becomes 654)

#include <iostream>
using namespace std;

int main(){
    int number =0 ;
    int firstDigit = 0;
    int MiddleDigit = 0;
    int lastDigit = 0;

    cout << " Enter the number : ";
    cin >> number;
    
    firstDigit = number /100;
    MiddleDigit = (number /10)%10;
    lastDigit = (number %10) ;

    cout << " First digit " << firstDigit << endl;
    cout <<" Middle Digit : "<< MiddleDigit <<endl;
    cout << " last Digit : "<<lastDigit<<endl;

    firstDigit = firstDigit * lastDigit;
    lastDigit = firstDigit / lastDigit;
    firstDigit = firstDigit / lastDigit;

    cout <<"After the swaping the first and last digit : "<< (firstDigit *100) + (MiddleDigit*10)+(lastDigit) ;

    return 0;
}