//check if digits are in ascending orde

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit = 0, middleDigit = 0, firstDigit = 0;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;
    firstDigit = numberOne / 100;

    cout<<lastDigit<<endl;
    cout<<middleDigit<<endl;
    cout<<firstDigit<<endl;

    if(firstDigit <= middleDigit && lastDigit){

        cout<<numberOne<<endl;
    }
    if(middleDigit < lastDigit){

        cout<<"ascending order"<<endl;
    }
    else{

        cout<<"not ascending: ";

    }
    return 0;

}