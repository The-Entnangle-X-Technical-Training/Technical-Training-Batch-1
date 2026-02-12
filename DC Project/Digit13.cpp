//pallindrome number of 3 digit

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit=0, firstDigit=0, middleDigit=0, total=0;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;
    firstDigit = numberOne / 100;

    total = (lastDigit*100 + middleDigit*10 + firstDigit);
    cout<<total<<endl;

    if (lastDigit = numberOne == total) {

        cout<<" This is pallindrome: ";
    }
    else{

        cout<<" This is not pallindrome: ";
    }

    return 0;

}