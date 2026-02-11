//harshad/Niven number checker(3-digit)
#include<iostream>
using namespace std;
int main()
{
        int number, digitOne, digitTwo,digitThree,sum=0;
        cout<<"Enter a three digit number:";
        cin>>number;

        digitOne=number/100;
        digitTwo=(number%100)/10;
        digitThree=number%10;
        sum=digitOne+digitTwo+digitThree;

        if(number%sum==0)
        {
            cout<<"The number is a Harshad/Niven number"<<endl;
        }
        else
        {
            cout<<"The number is not a Harshad/Niven number"<<endl;
        }
        
        return 0;
}