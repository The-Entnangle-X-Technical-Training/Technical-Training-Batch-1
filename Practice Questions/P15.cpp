//Swap Two numbers without third variable
//(V)- numberOne,numberTwo
//(O1)-input numberOne,numberTwo
//(O2)-numberOne=numberOne+numberTwo;
//(O3)-numberTwo=numberOne-numberTwo;
//(O4)-numberOne=numberOne-numberTwo;

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