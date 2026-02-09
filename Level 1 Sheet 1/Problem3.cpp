#include<iostream>
using namespace std;

int main(){

    int a, b;
    int Addition, Substraction, Multiplication, Division;

    cout<<"Enter the a = ";
    cin>>a;

    cout<<"Enter the b = ";
    cin>>b;

    Addition = a + b;
    Substraction = a - b;
    Multiplication = a * b;
    Division = a / b;
    
    cout<<"The Addition of a & b = "<<Addition<<endl;
    cout<<"The Substraction of a & b = "<<Substraction<<endl;   
    cout<<"The Multiplication of a & b = "<<Multiplication<<endl;
    cout<<"The Division of a & b = "<<Division<<endl;
}