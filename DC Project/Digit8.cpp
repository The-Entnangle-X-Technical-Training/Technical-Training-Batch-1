//Swap first and last digit of 3 digit number

#include<iostream>
using namespace std;
int main(){

    int numberOne, firstDigit, middleDigit, lastDigit, result;
    
    cout<<"Enter a number ";
    cin>>numberOne;

    lastDigit = numberOne % 10;
    firstDigit = numberOne / 100;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;

    result = firstDigit + middleDigit*10 + lastDigit*100;

    cout<<" Number after swaping: " << result;

    return 0;
}