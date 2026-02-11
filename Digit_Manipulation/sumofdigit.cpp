//sum of digit(3-digit)

#include<iostream>
using namespace std;
int main()
{
        int number, firstDigit, secondDigit, thirdDigit, sum;

        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number/100;
        secondDigit=(number%100)/10;
        thirdDigit=number%10;
        sum=firstDigit+secondDigit+thirdDigit;

        cout<<"The sum of digit of Three digit number is :"<<sum<<endl;
        
        return 0;

}