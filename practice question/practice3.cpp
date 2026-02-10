//SIMPLE CALCULATOR

// variable = numberOne,numberTwo,addition,subtraction,multiplication,division,modulus
// O1 = input numberOne , numberTwo
// O2 = addition 
// O3 = display the sum

#include <iostream>
using namespace std;
int main(){
    int numberOne=0;
    int numberTwo=0;
    int addition=0,subtraction=0,multiplication=0,division=0,modulus=0;
     
    
    cout<<"enter numberOne:";
    cin>>numberOne;

    cout<<"enter numberTwo:";
    cin>>numberTwo;

    addition=numberOne + numberTwo;
    cout<<"addition"<<addition<<endl;

    subtraction=numberOne - numberTwo;
    cout<<"subtraction"<<subtraction<<endl;

    multiplication=numberOne * numberTwo;
    cout<<"multiplication"<<multiplication<<endl;

    division=numberOne + numberTwo;
    cout<<"division"<<division<<endl;

    modulus=numberOne + numberTwo;
    cout<<"modulus"<<modulus<<endl;

    return 0;

}