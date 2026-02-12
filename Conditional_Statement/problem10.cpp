//Smallest of two number :
#include<iostream>
using namespace std;

int main(){

    int numberOne = 0;
    int numberTwo = 0;
    cout<<"Enter First Number :";
    cin>>numberOne;
    cout<<"Enter Second Number :";
    cin>>numberTwo;

    if(numberOne>numberTwo){
        cout<<"Second Number is Smaller";
    }
    else{
        cout<<"First Number is Smaller";
    }
    return 0;
}