//Reverse 3 digit

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit, middleDigit, firstDigit;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    firstDigit = numberOne / 100;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;
    lastDigit = numberOne % 10;

    cout<<firstDigit<<endl;
    cout<<middleDigit<<endl;
    cout<<lastDigit<<endl;

    numberOne = firstDigit + middleDigit * 10 + lastDigit * 100;
    cout<<numberOne;

    return 0;
}