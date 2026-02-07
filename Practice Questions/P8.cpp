//Celsius to Fahrenheit Converter
//(V)-celsius,fahreheit,
//(O1)- input celsius
//(O2)- F=(C*9/5)+32
//(O3)- display temperature in fahrenheit

#include<iostream>
using namespace std;

int main(){

    float celsius,fahrenheit;

    cout<<"Temperature in celsius:";
    cin>>celsius;

    fahrenheit=(celsius*9/5)+32;
    cout<<"Temperature in fahrenheit(F):"<<fahrenheit<<endl;
return 0;    
}
