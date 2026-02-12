//Reverse a 2 digit number

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit, firstDigit;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    firstDigit = numberOne / 10;
    
    cout<<lastDigit<<endl;
    cout<<firstDigit<<endl;

    return 0;
}