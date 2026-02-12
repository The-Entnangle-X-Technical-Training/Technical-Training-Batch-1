//Write a program that calculates Body Mass Index using: BMI = weight(kg) / (height(m))²

#include <iostream>
using namespace std;

int main() {
    float weight, height, BMI;
    cout << "enter your weight";
    cin >> weight;

    cout << "enter your height";
    cin >> height;

    BMI = weight/ (height * height) ;

    cout<< "your BMI is: " << BMI << endl;
    return 0;
}