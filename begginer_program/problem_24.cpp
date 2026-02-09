// Problem 24: BMI Calculator
// Write a program that calculates Body Mass Index using: BMI = weight(kg) / (height(m))²

#include <iostream>
using namespace std;

int main(){

    double weight = 0;
    double height = 0;
    cout << "Enter the your weights in kg : ";
    cin >> weight;
    cout << "enter the your height m : ";
    cin >> height;
    cout << "your body mass Index (BMI) : "<<weight/height;

}