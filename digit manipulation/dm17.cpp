 // count even digits in a number

// count even digits in a 4-digit number without loop

#include <iostream>
using namespace std;

int main(){

    int number;
    int digit1, digit2, digit3, digit4;
    int count = 0;

    cout << "Enter 4 digit number: ";
    cin >> number;

    digit1 = number % 10;
    digit2 = (number / 10) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 1000) % 10;

    if(digit1 % 2 == 0) 
    count++;
    else {}
    

    if(digit2 % 2 == 0) 
    count++;
    else {}

    if(digit3 % 2 == 0) 
    count++;
    else {}

    if(digit4 % 2 == 0) 
    count++;
    else {}

    cout << "Count of even digits = " << count;

    return 0;
}
