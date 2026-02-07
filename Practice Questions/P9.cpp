//Fahrenheit to Celsius Converter
//(V)-celsius,fahrenheit,
//(O1)- input celsius
//(O2)- C=(F-32)*5/9
//(O3)- display temperature in celsius

#include<iostream>
using namespace std;

int main(){

    float celsius,fahrenheit;

    cout<<"Temperature in fahrenheit:";
    cin>>fahrenheit;

    celsius=(fahrenheit-32)*5/9;
    cout<<"Temperature in celsius(C):"<<celsius<<endl;
return 0;    
}
