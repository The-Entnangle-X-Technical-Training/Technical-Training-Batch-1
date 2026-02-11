//Palindrome number checker (3-digit)

#include<iostream>
using namespace std;
int main()
    {
        int number,firstDigit,secondDigit,thirdDigit, reverse=0;

        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number/100;
        secondDigit=(number%100)/10;
        thirdDigit=number%10;
        reverse= thirdDigit*100+secondDigit*10+firstDigit;

        if(reverse==number)
        {
            cout<<"The number is palindrome"<<endl;

        }
        else
        {
            cout<<"The number is not palindrome:"<<reverse<<endl;
        }
        
        return 0;

}
