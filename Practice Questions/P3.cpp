//Simple Calculator

//(V)-numberOne, numberTwo,addition,subtraction,multiplication,division,modulus
//(O1)- input numberOne, numberTwo
//(O2)-addition = numberOne + numberTwo
//(O3)-subtraction =numberOne - numberTwo
//(O4)- multiplication =numberOne * numberTwo
//(O5)- division =numberOne/numberTwo
//(O6)- modulus = numberOne % numberTwo
//(O7)- Display result

#include<iostream>
using namespace std;

int main(){

    int numberOne,numberTwo,addition,subtraction,multiplication,division,modulus=0;
    cout<<"Enter numberOne:";
    cin>>numberOne;

    cout<<"Enter numberTwo:";
    cin>>numberTwo;

    addition=numberOne + numberTwo;
    cout<<"addition="<<addition<<endl;

    subtraction =numberOne - numberTwo;
    cout<<"subtraction="<<subtraction<<endl;

    multiplication =numberOne * numberTwo;
    cout<<"multiplication="<<multiplication<<endl;

    division =numberOne/numberTwo;
    cout<<"division="<<division<<endl;

    modulus = numberOne % numberTwo;
    cout<<"modulus="<<modulus<<endl;
return 0;
    
}