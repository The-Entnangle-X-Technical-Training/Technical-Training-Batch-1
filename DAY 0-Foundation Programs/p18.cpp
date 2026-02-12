//Greatest of Three numbers
#include<iostream>
using namespace std;

int main(){

    int numberOne=0;
    int numberTwo=0;
    int numberThree=0;

    cout<<"Number1=";
    cin>>numberOne;

    cout<<"Number2=";
    cin>>numberTwo;
    cout<<"Number3=";
    cin>>numberThree;

    if(numberOne>numberTwo || numberOne>numberThree){
        cout<<"Number1 is Greatest.";
    }

    else if(numberTwo>numberOne && numberTwo>numberThree){
        cout<<"Number2 is Greatest.";
    }

    else{
        cout<<"Number3 is greatest.";
    }

}