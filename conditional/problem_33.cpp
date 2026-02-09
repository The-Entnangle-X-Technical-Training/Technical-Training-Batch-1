// Problem 33: Ticket Pricing with Age-Based Discounts
// Write a program that calculates ticket price based on age: Child (0-12): ₹100, Teen (13-17): ₹150, Adult
// (18-59): ₹200, Senior (60+): ₹120. Display the ticket price.

#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout << "enter your age : ";
    cin >> age;
    if(age >=0 && age <=12){
        cout <<"your ticket price is : 100 Rs";
    }else if(age >=13 && age <=17){
        cout <<"your ticket price is : 150 Rs ";
    }else if(age >=18 && age <=59){
        cout <<"your ticket price is : 200 Rs";
    }else if(age >=60){
        cout <<"your ticket price is : 120 Rs";
    }else{
        cout <<"invalid age";
    }
    return 0;
}