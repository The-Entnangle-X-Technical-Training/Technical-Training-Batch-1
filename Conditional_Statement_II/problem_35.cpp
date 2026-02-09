// Problem 35: Loan Eligibility Checker
// Write a program that checks loan eligibility based on: age (21-60), income (>25000), credit score (>700).
// Display "Eligible" only if all conditions are met, otherwise display which condition failed.

#include <iostream>
using namespace std;
 
int main(){
    int age = 0;
    int income = 0;
    int CreditScore = 0;
    cout << " Enter your age : ";
    cin >> age;
    cout << " Enter your Salary : ";
    cin >> income;
    cout << " Enter the Credit score : ";
    cin >> CreditScore;
    if((age >=21 && age <=60) && income >25000  && CreditScore > 700){
        cout << "Eligible";
    }else if( age <=21){
        cout << " failed : your are too yough for loan ";
    }else if(age >= 60){
        cout <<" failed : your are too lod for loan ";
    }else if(income <25000){
        cout << "Failed : your income is too low ";
    }else if(CreditScore< 700){
        cout << " Failed : your credit score is low ";
    }else{
        cout << "invalid input";
    }
    return 0;
}