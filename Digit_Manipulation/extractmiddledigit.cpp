//extract middle digit of 3-digit number

#include<iostream>
using namespace std;
int main()
{
        int number, digit, middleDigit;

        cout<<"Enter a number:";
        cin>>number;

        digit=number%100;
        middleDigit=digit/10;

        cout<<"The middle digit of Three digit number is :"<<middleDigit<<endl;
        
        return 0;

}