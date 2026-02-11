//sum and average of two number

#include<iostream>
using namespace std;
int main()
    {
            int numOne, numTwo, sum ;
            float avg;

            cout<<"Enter First number:";
            cin>>numOne;

            cout<<"Enter second number:";
            cin>>numTwo;

            sum = numOne + numTwo;

            avg = sum/2;

            cout<<"The sum is : "<<sum<<endl;

            cout<<"The average is : "<< avg<<endl;
            
            return 0;
    }