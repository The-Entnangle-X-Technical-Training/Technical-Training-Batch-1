//Extract first digit of 3 digit number

#include<iostream>
using namespace std;

int main(){

    int numberOne , firstDigit;
    cout<<"Enter a number "<<endl;
    cin>>numberOne;

    firstDigit = numberOne / 100;
    cout<<firstDigit;


    return 0;
}