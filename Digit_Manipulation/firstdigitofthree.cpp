//extract first digit of 3-digit number

#include<iostream>
using namespace std;
int main()
{
        int number,first_digit;

        cout<<"Enter a number:";
        cin>>number;

        first_digit=number/100;

        cout<<"The first digit of Three digit number is :"<<first_digit<<endl;
        
        return 0;

}