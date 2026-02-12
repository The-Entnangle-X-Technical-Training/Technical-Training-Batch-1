//simple intrest calculator
#include<iostream>
using namespace std;
int main(){
    int principal , rate , time ;
    principal = 1000 ;
    rate = 5;
    time = 2;
    int intrest ;
    intrest = principal * rate * time / 100;
    cout<<"the simple intrest is :"<<intrest;
    return 0;
}