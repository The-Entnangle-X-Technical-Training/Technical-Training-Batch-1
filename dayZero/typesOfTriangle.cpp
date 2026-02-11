#include<iostream>
using namespace std;

int main()
{
    int angleOne, angleTwo, angleThree;
    cout<<"Enter first angle : ";
    cin>>angleOne;
    cout<<"Enter second angle : ";
    cin>>angleTwo;
    cout<<"Enter third angle : ";
    cin>>angleThree;
    if(angleOne + angleTwo + angleThree == 180)
        {
            if(angleOne < 90 && angleTwo <90 && angleThree < 90)
                {
                    cout<<"The triangle is an acute triangle.";
                }
            else if(angleOne == 90 || angleTwo == 90 || angleThree == 90)
                {
                    cout<<"The triangle is a right triangle.";
                }
            else if((   angleOne > 90 && angleTwo < 90 && angleThree < 90) || (angleOne < 90 && angleTwo > 90 && angleThree < 90) || (angleOne < 90 && angleTwo < 90 && angleThree > 90))
                {
                    cout<<"The triangle is an obtuse triangle.";
                }
        }
    else
        {
            cout<<"The angles do not form a triangle.";
        }
}