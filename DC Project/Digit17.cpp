//count even digits in a number

#include<iostream>
using namespace std;
int main(){

    int numberOne, firstDigit = 0, secondDigit = 0, thirdDigit = 0, lastDigit = 0;
    int count = 0;
    cout<<"Enter number "<<endl;
    cin>>numberOne;

    firstDigit = numberOne / 1000;
    secondDigit = numberOne / 100;
    secondDigit = secondDigit % 10;
    thirdDigit = numberOne / 10;
    thirdDigit = thirdDigit % 10;
    lastDigit = numberOne % 10;

    cout<< firstDigit <<endl;
    cout<< secondDigit <<endl;
    cout<< thirdDigit <<endl;
    cout<< lastDigit <<endl;

    if(firstDigit % 2 == 0){

        count = count+1;
    }
     if(secondDigit % 2 == 0){

        count = count+1;
    }
     if(thirdDigit % 2 == 0){

        count = count+1;
    }
     if(lastDigit % 2 == 0){

        count = count+1;
    }
    
    cout<<count;

    return 0;


}