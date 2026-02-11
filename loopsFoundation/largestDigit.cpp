#include<iostream>
using namespace std;
int main()
{
    int number, digit, largestDigit = 0;
    cout<<"Enter a number : ";
    cin>>number;    
    for(int i = number; i > 0; i = i / 10) {
        digit = i % 10;
        if(digit > largestDigit) {
            largestDigit = digit;
        }
    }
    cout<<"Largest digit is : " << largestDigit << endl;

    return 0;
}