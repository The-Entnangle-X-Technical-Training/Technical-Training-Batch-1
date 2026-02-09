#include<iostream>
using namespace std;    

int main() {
    int celsius;
    float fahrenheit;
    cout<<"Enter the temperature in Celsius = ";
    cin>>celsius;
    fahrenheit = (celsius*9/5)+32;
    cout<<"The temperature in Fahrenheit is = "<<fahrenheit<<endl;
}