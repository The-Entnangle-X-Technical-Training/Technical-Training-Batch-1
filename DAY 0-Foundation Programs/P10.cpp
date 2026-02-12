#include<iostream>
using namespace std;

int main(){
    int numberOne=5;
    int numberTwo=31;
    int numberThree=23;
    
    cout<<"Before swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;
    cout<<"numberThree:"<<numberThree<<endl;

    numberOne=numberOne+numberTwo+numberThree;
    numberTwo=numberOne-numberTwo-numberThree;
    numberThree=numberOne-numberTwo-numberThree;
    numberOne=numberOne-numberTwo -numberThree;
    

    cout<<"After swapping:"<<endl;
    cout<<"numberOne:"<<numberOne<<endl;
    cout<<"numberTwo:"<<numberTwo<<endl;
    cout<<"numberThree:"<<numberThree<<endl;


    return 0;


}