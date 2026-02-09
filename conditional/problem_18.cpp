// Problem 18: Triangle Validity by Sides
// Write a program that takes three sides as input and checks if they can form a valid triangle (sum of any
// two sides > third side). Display "Valid" or "Invalid".

#include <iostream>
using namespace std;

int main(){
    int FirstSide = 0;
    int SecondSide = 0;
    int ThirdSide = 0;
    cout << " Enter the first side size of triangle : ";
    cin >> FirstSide;
    cout << "Enter the second side size of Triangle : ";
    cin >> SecondSide;
    cout << "Enter the third side size of triangle : ";
    cin >> ThirdSide;

    if((FirstSide+ SecondSide)> ThirdSide){
        if((FirstSide + ThirdSide) > SecondSide){
        if((SecondSide + ThirdSide) > FirstSide){
        cout <<" Valid  triangle";
    }}
    }else{
        cout <<" Invalid  triangle";
    }

    return 0;
}