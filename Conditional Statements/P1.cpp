//Positive,negative or zero

#include<iostream>
using namespace std;

int main(){
    int number=0;
    int positive;
    int negative;
    int zero;

    cout<<"Enter a Number:";
    cin>>number;

    if(number>0){
        cout<<"It is a Positive number.";
    }
    if(number<0){
        cout<<"It is a Negative number.";
    }
    else{
        cout<<"It is a Zero.";
    }
}