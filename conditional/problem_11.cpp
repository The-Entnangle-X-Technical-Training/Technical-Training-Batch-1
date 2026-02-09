// Problem 11: Triangle Validity by Angles
// Write a program that takes three angles as input and checks if they can form a valid triangle (sum of
// angles = 180). Display "Valid Triangle" or "Invalid Triangle".

#include <iostream>
using namespace std;

int main(){
    int firstAngle =0;
    int SecondAngle = 0;
    int ThirdAngle = 0;
    int SumOfAngle = 0;
    cout << "enter first Angle : ";
    cin >> firstAngle;
    cout << "enter Second Angle : ";
    cin >> SecondAngle;
    cout << "enter first Angle : ";
    cin >>ThirdAngle;
    SumOfAngle = firstAngle + SecondAngle + ThirdAngle;
    if(SumOfAngle == 180){
        cout <<"Valid Triangle";
    }
    else{
        cout << "Invalid Triangle";
    }
    return 0;

}