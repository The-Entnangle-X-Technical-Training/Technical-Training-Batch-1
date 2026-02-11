//swapp with usig thrid variable 
#include <iostream>
using namespace std;
int main()
{
        int numberOne, numberTwo , temp;
        cout<<"Enter a first number:";
        cin>>numberOne;

        cout<<"Enter a second number:";
        cin>>numberTwo;

        cout<<"Before swapping "<<endl;

        cout<<"first number is="<<numberOne<<endl;
        cout<<"second number is="<<numberTwo<<endl;

        //swapping
        temp=numberOne;
        numberOne=numberTwo;
        numberTwo=temp;

        cout<<"After swapping"<<endl;
        cout<<"first number is ="<<numberOne<<endl;
        cout<<"second number is ="<<numberTwo<<endl;

        return 0;
    }