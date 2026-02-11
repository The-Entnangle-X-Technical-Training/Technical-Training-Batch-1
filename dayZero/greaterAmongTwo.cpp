#include<iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo;

    cout<<"Enter first number : ";
    cin>>numberOne;
    
    cout<<"Enter second number : ";
    cin>>numberTwo;

    if(numberOne > numberTwo)
        {
            cout<<numberOne<<" is greater than "<<numberTwo;
        }
    else if(numberTwo > numberOne)
        {
            cout<<numberTwo<<" is greater than "<<numberOne;
        }
    else
        {
            cout<<"Both numbers are equal.";
        }
    
    return 0;
}