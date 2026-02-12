//product of all digits

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit = 0, middleDigit = 0, firstDigit = 0, product;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;
    firstDigit = numberOne / 100;

    cout<<lastDigit<<endl;
    cout<<middleDigit<<endl;
    cout<<firstDigit<<endl;

    product = lastDigit * middleDigit * firstDigit;
    cout<<product<<endl;

    return 0;
}