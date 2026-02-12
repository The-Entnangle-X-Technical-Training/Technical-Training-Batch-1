#include<iostream>
using namespace std;

int main(){
    float celsius;
    float fahrenheit;
    

    cout<<"Enter the temperature in celsius:";
    cin>>celsius;

    fahrenheit=(celsius *  9/5) + 32;
    cout<<"The temperature in fahrenheit is:"<<fahrenheit<<"F"<<endl;

    return 0;
}

    

