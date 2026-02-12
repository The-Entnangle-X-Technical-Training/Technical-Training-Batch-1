#include<iostream>
using namespace std;
int main(){
    int Num1 , Num2 ;
    int multiplication , sum , subtraction , modulus;
    float division;
    cout<<"Enter Number 1 :";
    cin>>Num1;

    cout<<"Enter Number 2 :";
    cin>>Num2;

    sum = Num1 + Num2 ;
    cout<<"sum is :"<<sum<<endl;
    subtraction = Num1 - Num2 ;
    cout<<"subtraction is :"<<subtraction<<endl;
    multiplication = Num1 * Num2 ;
    cout<<"multiplication is :"<<multiplication<<endl;
    division = Num1 / Num2 ;
    cout<<"division is :"<<division<<endl;
    modulus = Num1 % Num2 ;
    cout<<"modulus is :"<<modulus<<endl;

    return 0;
}