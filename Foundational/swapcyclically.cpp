//swap three numbers cyclically

#include<iostream>
using namespace std;
int main()
    {
        int numberOne, numberTwo, numberThree, temp;
        cout<<"Enter a first number:";  
        cin>>numberOne;
        cout<<"Enter a second number:";
        cin>>numberTwo;
        cout<<"Enter a third number:";
        cin>>numberThree;

        cout<<"Before swapping "<<endl;
        cout<<"first number is="<<numberOne<<endl;
        cout<<"second number is="<<numberTwo<<endl;
        cout<<"third number is="<<numberThree<<endl;

        //swapping
        temp=numberOne;
        numberOne=numberTwo;
        numberTwo=numberThree;
        numberThree=temp;

        cout<<"After swapping"<<endl;
        cout<<"first number is ="<<numberOne<<endl;
        cout<<"second number is ="<<numberTwo<<endl;
        cout<<"third number is ="<<numberThree<<endl;

        return 0;
    }