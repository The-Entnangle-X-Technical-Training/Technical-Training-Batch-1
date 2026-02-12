//Greater of Two Numbers

#include<iostream>
using namespace std;

int main(){

    int numberOne=0;
    int numberTwo=0;

    cout<<"Number1=";
    cin>>numberOne;

    cout<<"Number2=";
    cin>>numberTwo;

    if(numberOne>numberTwo){
        cout<<"Number1 is Greatest.";
    }

    else if(numberTwo>numberOne){
        cout<<"Number2 is Greatest.";
    }

    else{
        cout<<"Both are equals.";
    }

}