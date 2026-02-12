//pallindrome number 2 digit

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit=0, firstDigit=0, total=0;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    firstDigit = numberOne / 10;
    
    cout<<lastDigit;
    cout<<firstDigit;

    if (lastDigit = numberOne == total) {

        cout<<" This is pallindrome: ";
    }
    else{

        cout<<" This is not pallindrome: ";
    }

    return 0;

}