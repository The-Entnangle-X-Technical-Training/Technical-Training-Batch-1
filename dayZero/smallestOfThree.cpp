#include<iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo, numberThree;

    cout<<"Enter first number : ";
    cin>>numberOne;
    
    cout<<"Enter second number : ";
    cin>>numberTwo;

    cout<<"Enter third number : ";
    cin>>numberThree;

    if(numberOne < numberTwo && numberOne < numberThree)
        {
            cout<<numberOne<<" is smallest than "<<numberTwo<<" and "<<numberThree;
        }
    else if(numberTwo < numberOne && numberTwo < numberThree)
        {
            cout<<numberTwo<<" is smallest than "<<numberOne<<" and "<<numberThree;
        }
    else if(numberThree < numberOne && numberThree < numberTwo)
        {
            cout<<numberThree<<" is smallest than "<<numberOne<<" and "<<numberTwo;
        }
    else
        {
            cout<<"All numbers are equal.";
        }
    
    return 0;
}