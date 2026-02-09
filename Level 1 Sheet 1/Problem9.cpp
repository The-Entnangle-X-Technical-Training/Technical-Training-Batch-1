#include<iostream>
using namespace std;

int main(){
     int fahrenheit;
     float celsius; 

    cout<<"Enter the temperature in Fahrenheit = ";
    cin>>fahrenheit;
    celsius = (fahrenheit-32)*5/9;
    cout<<"The temperature in Celsius is = "<<celsius<<endl;
}