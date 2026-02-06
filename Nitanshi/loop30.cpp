#include<iostream>
using namespace std;

int main(){
    int num1, num2, remainder, a, b, lcm, gcd;

    cout<<"enter two no.";
    cin>>num1>>num2;

    a = num1;
    b = num2;

    while(num2 != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    gcd = num1;
    lcm = (a * b)/gcd;

    cout<<lcm;
    
    return 0; 
}