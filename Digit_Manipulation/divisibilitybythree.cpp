//check divisibility by 2 using digit sum 

#include<iostream>
using namespace std;
int main()
{
        int number, firstDigit, secondDigit, thirdDigit, sum=0;
        cout<<"Enter a number:";
        cin>>number;

        firstDigit=number/100;
        secondDigit=(number%100)/10;
        thirdDigit=number%10;

        sum= firstDigit+secondDigit+thirdDigit;

        if (sum%3==0)
        {
            cout<<"The number is divisible by 3"<<endl;
        }
        else
        {
            cout<<"The number is not divisible by 3"<<endl;
        }
            cout << "Digits: " << firstDigit << " " << secondDigit << " " << thirdDigit << endl;
            cout << "Sum: " << sum << endl;

return 0;

}