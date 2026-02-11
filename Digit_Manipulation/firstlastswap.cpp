//swap first and last digit of 3- digit number

#include<iostream>
using namespace std;
int main()
{
        int number,firstDigit,secondDigit,thirdDigit,Swap=0;
        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number/100;
        secondDigit=(number/10)%10;
        thirdDigit=number%10;

        Swap= thirdDigit*100+secondDigit*10+firstDigit;

        cout<<"The swapped number is:"<<Swap<<endl;
        
        return 0;

}
