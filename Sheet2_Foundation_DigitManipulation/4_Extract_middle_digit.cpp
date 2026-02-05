// Extract middle number in a 3 digit number
#include <iostream>
using namespace std;

int main() {
    int inputNumber = 0;
    int middleDigit = 0;

    cout<<"Enter a three digit number: ";
    cin>>inputNumber;

    inputNumber = inputNumber / 10;
    middleDigit = inputNumber % 10;
    
    cout<<"The middle digit is: "<<middleDigit;


    return 0;
}
