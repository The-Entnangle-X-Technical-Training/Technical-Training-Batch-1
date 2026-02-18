//Problem 13: Greatest of Three Numbers

#include<iostream>
using namespace std;


int main(){
    int number1,number2,number3=0;

    cout<<"number1=";
    cin>>number1;

    cout<<"number2=";
    cin>>number2;

    cout<<"number3=";
    cin>>number3;

    if(number1>=number2 && number1>=number3){
        cout<<number1;
    }
    else if(number2>=number1 && number2>=number3){
        cout<<number2;
    }
    else{
        cout<<number3;
    }

}