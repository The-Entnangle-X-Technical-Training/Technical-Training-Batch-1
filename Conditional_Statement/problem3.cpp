//Greater of two number :
#include<iostream>
using namespace std;
int main(){
    int firstNumber = 0 ;
    int secondNumber = 0;
    cout<<"Enter First Number :";
    cin>>firstNumber;
    cout<<"Enter Second Number :";
    cin>>secondNumber;

    if(firstNumber>secondNumber){
        cout<<"First Number is Greater and Second Number Smaller";
    }
    else{
        cout<<"Second Number is Greater and First Number is Smaller";
    }
    return 0 ;
}