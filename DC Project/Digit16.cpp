//check divisibility by 3 using digit sum

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit = 0, middleDigit = 0, firstDigit = 0, total;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    middleDigit = numberOne / 10;
    middleDigit = middleDigit % 10;
    firstDigit = numberOne / 100;

    cout<<lastDigit<<endl;
    cout<<middleDigit<<endl;
    cout<<firstDigit<<endl;

    total = lastDigit + middleDigit + firstDigit;
    cout<<total<<endl;

    if(total % 3 ==0){
        
        cout<<"Divisible by 3: ";
    }

    else{

        cout<<"It is not divisible by 3: ";
    }
    return 0;
}