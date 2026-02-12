#include<iostream>
using namespace std;

int main(){
    int numberOne=5;
    int numberTwo=31;
    
    cout<<"Before swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;

    numberOne=numberOne+numberTwo;
    numberTwo=numberOne-numberTwo;
    numberOne=numberOne-numberTwo;

    cout<<"After swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;

    return 0;


}