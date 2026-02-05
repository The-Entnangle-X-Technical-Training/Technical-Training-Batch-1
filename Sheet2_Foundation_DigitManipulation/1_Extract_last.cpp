// Extract last digit
#include <iostream>
using namespace std;

int main() {
    int inputNumber = 0;
    int lastDigit = 0;

    cout<<"Enter the number: ";
    cin>>inputNumber;

    lastDigit = inputNumber%10;
    
    cout<<"The last digit is: "<<lastDigit;


    return 0;
}
