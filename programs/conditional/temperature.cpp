//Write a program that takes temperature as input and displays:
//"Cold" if temperature < 15
//"Normal" if temperature is 15-30
//"Hot" if temperature > 30

#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if(temp < 15) {
        cout << "Cold";
    }
    else if(temp <= 30) {
        cout << "Normal";
    }
    else {
        cout << "Hot";
    }

    return 0;
}
