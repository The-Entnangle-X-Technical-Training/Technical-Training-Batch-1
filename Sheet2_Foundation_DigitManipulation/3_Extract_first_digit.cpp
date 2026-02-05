//Extract first digit of a number
#include <iostream>
using namespace std;

int main() {
    int inputNumber = 0;
    int firstDigit = 0;

    cout<<"Enter a three digit number: ";
    cin>>inputNumber;

    firstDigit = inputNumber / 100;
    
    cout<<"The first digit is: "<<firstDigit;


    return 0;
}
