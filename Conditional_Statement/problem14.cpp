//smallest of 3 number :
#include<iostream>
using namespace std;
int main(){
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;

    cout<<"Enter First Number :";
    cin>>firstNumber;
    cout<<"Enter Second Number :";
    cin>>secondNumber;
    cout<<"Enter Third Number :";
    cin>>thirdNumber;

    if(firstNumber<secondNumber && firstNumber<thirdNumber){
        cout<<"First Number is Smaller";
    }
    else if(secondNumber<firstNumber && secondNumber<thirdNumber){
        cout<<"Second Number is Smaller";
    }
    else{
        cout<<"Third Number is Smaller";
    }

    return 0;
}