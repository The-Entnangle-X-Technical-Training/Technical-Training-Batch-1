//25: Power Calculator

#include<iostream>
using namespace std;

int main(){
    int base=0;
    int exponent=0;
    int power=1;

    cout<<"base=";
    cin>>base;

    cout<<"exponent=";
    cin>>exponent;

    int i=1;
    while(i<=exponent){
        power=power*base;
        i++;
    }
    cout<<power;
}

    