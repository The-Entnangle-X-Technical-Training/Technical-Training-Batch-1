//Celsius to Fahrenheit

#include<iostream>
using namespace std;
int main(){
    float C , F;

    cout<< "Enter the temperature in Celsius: ";
    cin>>C;

    F = ( C * 9/5) + 32;

    cout<< "\nTemperature in Fahrenheit = " << F << endl;

    return 0;
}