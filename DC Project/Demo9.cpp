//Fahrenheit to celsius

#include<iostream>
using namespace std;
int main(){
    float F, C;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> F;

    C = (F - 32) * 5 / 9;

    cout << "\nTemperature in Celsius = " << C << endl;

    return 0;
}