#include<iostream>
using namespace std;

int main(){
    int num1, num2, remainder;

    cout<<"enter two no.";
    cin>>num1>>num2;

    while(num2 != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    cout<<num1;
    return 0; 
}