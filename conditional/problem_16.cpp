// Problem 16: Grade Calculator
// Write a program that takes marks (0-100) as input and displays grade: A (90-100), B (80-89), C (70-79),
// D (60-69), E (40-59), F (0-39).

#include <iostream>
using namespace std;

int main(){
    int Marks = 0;
    cout << "enter the your marks : ";
    cin >> Marks;
    if(Marks >= 90){
        cout << "you're grade is A";
    }
    else if (Marks >= 80 ){
        cout << "you're grade is B";
    }else if (Marks >= 70 ){
        cout << "you're grade is C";
    }else if (Marks >= 60 ){
        cout << "you're grade is D";
    }else if (Marks >= 40 ){
        cout << "you're grade is E";
    }else{
        cout << "you're grade is F";
    }
    return 0;
}