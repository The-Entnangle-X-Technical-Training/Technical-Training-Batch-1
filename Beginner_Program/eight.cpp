//convert celsius to fahrenheit using formula F = (C * 9/5)+ 32
#include<iostream>
using namespace std;
int main(){
    int cel;
    cout<<"enter celcius :";
    cin>>cel;
    int fahrenheit;
    fahrenheit = (cel * 9/5) +32;
    cout<<"fehrenheit is :"<<fahrenheit;
    return 0;
}