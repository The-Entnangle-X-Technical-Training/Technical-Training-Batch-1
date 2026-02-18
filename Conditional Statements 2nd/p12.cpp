//Problem 12: Check if Number is Multiple of 3
#include<iostream>
using namespace std;

int main(){
    int number=0;

    cout<<"number=";
    cin>>number;

    if(number%3==0){
        cout<<"multiple of 3";
    }
    else{
        cout<<"not multiple of 3";
    }
}