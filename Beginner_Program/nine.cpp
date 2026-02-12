//fahrenheit to celsius using formula C = (F - 32)*5/9
#include<iostream>
using namespace std;
int main(){
    int fahrenheit;
    cout<<"enter fahrenheit :";
    cin>>fahrenheit;
    int celcius;
    celcius = (fahrenheit - 32)*5/9;
    cout<<"celcius is :"<<celcius;
    return 0;
}