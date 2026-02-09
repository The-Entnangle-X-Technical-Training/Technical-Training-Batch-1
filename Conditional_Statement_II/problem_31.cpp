// Problem 31: Roots of Quadratic Equation Type
// Write a program that takes coefficients a, b, c of quadratic equation ax²+bx+c=0, calculates discriminant
// (b²-4ac), and displays whether roots are real & distinct (D>0), real & equal (D=0), or imaginary (D<0).

#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "enter the coefficient a : ";
    cin >> a;
    cout << "enter the coefficient b : ";
    cin >> b;
    cout << "enter the coefficient c : ";
    cin >> c;
    int D = b*b - 4*a*c;
    if(D > 0){
        cout <<"the roots are real and distinct ";
    }else if(D == 0){
        cout <<"the roots are real and equal ";
    }else if(D < 0){
        cout <<"the roots are imaginary ";
    }else{
        cout <<"invalid coefficients";
    }
    return 0;
}