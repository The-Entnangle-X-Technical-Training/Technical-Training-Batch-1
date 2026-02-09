// Problem 17: Triangle Type by Sides
// Write a program that takes three sides of a triangle as input and checks if it forms an Equilateral (all sides
// equal), Isosceles (two sides equal), or Scalene (all sides different) triangle.

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

    if( FirstSide == SecondSide){
        if(FirstSide == ThirdSide){
            cout << "it forms an Equilateral (all sides equal) triangle";
        }
        else{
            cout <<" Isosceles (two sides equal) triangle";
        }
    }else if(FirstSide ==ThirdSide){
        if(FirstSide ==SecondSide){
           cout << "it forms an Equilateral (all sides equal) triangle";
        }else{
            cout <<" Isosceles (two sides equal) triangle";
        }
    }else if(SecondSide == ThirdSide){
        if(FirstSide ==SecondSide){
           cout << "it forms an Equilateral (all sides equal) triangle";
        }else{
            cout <<" Isosceles (two sides equal) triangle";
        }
    }
    else{
        cout << " Scalene (all sides different) triangle";
    }

    return 0;
}