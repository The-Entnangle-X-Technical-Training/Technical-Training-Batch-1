//Problem 19: Check if Number is Single Digit

#include<iostream>
using namespace std;

int main(){

    int number=0;
    cout<<"Number=";
    cin>>number;

    if(number>=0 && number<=9){
        cout<<"Single Digit Number";
    }
    else{
        cout<<"Not Single Digit Number";
    }
}