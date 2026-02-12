//Swap Two numbers using third variable

//(V)- 

#include<iostream>
using namespace std;

int main(){
    int numberOne=5;
    int numberTwo=31;
    
    cout<<"Before swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;

    int temp=numberOne;
    numberOne=numberTwo;
    numberTwo=temp;

    cout<<"After swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;

    return 0;


}