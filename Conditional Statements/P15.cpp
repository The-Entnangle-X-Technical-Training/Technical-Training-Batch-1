// Check if Number is Single Digit, Double Digit, or More

#include<iostream>
using namespace std;

int main(){

    int number;

    cout<<"Number=";
    cin>>number;

    if(number>=0 && number<=9){
        cout<<"Single digit number";
    }
    else if(number>=10 && number<=99){
        cout<<"Double digit number";
    }
    else{
        cout<<"More than double digit";
    }
}