//average of first and last digit 

#include<iostream>
using namespace std;
    int main()
    {
        int number,firstDigit,lastDigit;
        double average;
        cout<<"Enter a number:";
        cin>>number;
        firstDigit=number/1000;
        lastDigit=((number%1000)%100)%10;
        average= (firstDigit+lastDigit)/2.0;
        cout<<"The average of first and last digit is:"<<average<<endl;
        return 0;

    }
