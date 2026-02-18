//Problem 10: Smallest of Two Numbers

#include<iostream>
using namespace std;

int main(){

    int number1=0;
    int number2=0;
    
    cout<<"number1=";
    cin>>number1;

    cout<<"number2=";
    cin>>number2;

    if(number1<=number2){
        cout<<"number1 is Smalllest";
    }
    else{
        cout<<"number2 is Smallest";
    }
return 0;
}