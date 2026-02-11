//check if last digit is even 

#include<iostream>
using namespace std;
int main()
{
    int number,lastDigit;
    cout<<"Ente a number:";
    cin>>number;
    lastDigit=number%10;
    if(lastDigit%2==0)
    {
        cout<<"The last digit of the number is:"<<lastDigit<<" and it is even"<<endl;
    }
    else
    {
        cout<<"The last digit of the number is:"<<lastDigit<<" and it is odd"<<endl;
    }
    return 0;

}
