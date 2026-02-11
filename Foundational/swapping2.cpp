//swapping without using third variable
#include<iostream>
using namespace std;
int main()
{
        
        int numberOne, numberTwo;

        cout<<"Enter a first number:";
        cin>>numberOne;

        cout<<"Enter a second number:";
        cin>>numberTwo;

        numberOne=numberOne+numberTwo;
        numberTwo=numberOne-numberTwo;
        numberOne=numberOne-numberTwo;

        cout<<"After Swapping"<<endl;

        cout<<"first number is :"<<numberOne<< endl;
        cout<<"second number is :"<<numberTwo<< endl;

        return 0;
}