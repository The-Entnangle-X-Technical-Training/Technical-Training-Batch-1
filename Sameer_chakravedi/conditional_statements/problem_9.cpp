// Problem 9: Eligibility for Voting
// Write a program that takes a person's age as input and checks if they are eligible to vote (age ≥ 18).
// Display "Eligible" or "Not Eligible".


#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout << "Enter your age : ";
    cin >> age;
    if(age >= 18){
        cout << "Eligible ";
    }
    else{
        cout <<"Not Eligible ";
    }
    return 0;
}