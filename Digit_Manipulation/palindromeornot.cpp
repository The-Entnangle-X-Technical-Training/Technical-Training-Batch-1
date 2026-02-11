//palindrome number checker(2-digit)

#include<iostream>
using namespace std;
int main()
    {
        int number,firstDigit,secondDigit,reverse=0;
        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number%10;
        secondDigit=(number/10)%10;
        reverse= firstDigit*10+secondDigit;

        if(reverse==number)
        {
            cout<<"The number is palindrome"<<endl;
        }
        else
        {
            cout<<"The number is not palindrome"<<endl;
        }
        
        return 0;

}
