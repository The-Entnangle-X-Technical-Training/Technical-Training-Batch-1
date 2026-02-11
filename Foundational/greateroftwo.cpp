//greatest of two numbers

#include<iostream>
using namespace std;
int main()
{
    int numberOne, numberTwo;

    cout<<"Enter first number:";
    cin>>numberOne;

    cout<<"Enter second number:";
    cin>>numberTwo;

    if(numberOne>=numberTwo )
    {
    cout<<"The greatest number is :"<<numberOne<<endl;

    }
    else
    {
        cout<<"The greatest number is :"<<numberTwo<<endl;
    }
    return 0;
}