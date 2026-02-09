// Problem 20: BMI Category
// Write a program that takes BMI value as input and displays category: Underweight (<18.5), Normal
// (18.5-24.9), Overweight (25-29.9), Obese (≥30).

#include <iostream>
using namespace std;

int main(){
    double BMI = 0;
    cout <<" enter the BMI value ";
    cin >> BMI;

    if(BMI <18.5){
        cout << " Underweight ";
    }else if(BMI<= 24.9){
        cout << " Normal ";
    }else if(BMI <=29.9){
        cout <<" Overweight ";
    }else{
        cout <<" Obese "; 
    }
    return 0;
}