//Armstrong number checker

#include <iostream>
using namespace std;
int main()
{
    int number,originalNumber,result=0,digit;
    cout<<"Enter a number: ";
    cin>>number;

    originalNumber=number;

    while(number>0){
        digit=number%10;
        result=result+digit*digit*digit;
        number=number/10;
    }

    cout<<" Sum of cubes of digits is: "<<result<<endl;

    if(originalNumber==result){

        cout<<"Number is armstrong number "<<endl;
    }

    else{

        cout<<"Number is not armstrong number "<<endl;
    }
    return 0;
}