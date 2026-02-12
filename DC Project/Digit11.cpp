//check if last digit is even 

#include<iostream>
using namespace std;
int main(){

    int numberOne=0, lastDigit=0;

    cout<<"Enter a number: ";
    cin>>numberOne;

    lastDigit = numberOne % 10;

    if(lastDigit % 2 ==0 ){
        cout<<" lastDigit "<<lastDigit<<" Is even "<<endl;
    }
    else {
        cout<<" lastDigit "<<lastDigit<<" Is odd "<<endl;
    }

    return 0;

}