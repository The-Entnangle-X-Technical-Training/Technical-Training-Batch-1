// Problem 29: Triangle Type by Angles
// Write a program that takes three angles of a triangle and displays whether it is Acute (all angles < 90°),
// Right (one angle = 90°), or Obtuse (one angle > 90°) triangle

#include <iostream>
using namespace std;

int main(){
    int angle1 = 0;
    int angle2 = 0;
    int angle3 = 0;
    cout << "enter the first angle of triangle : ";
    cin >> angle1;
    cout << "enter the second angle of triangle : ";
    cin >> angle2;
    cout << "enter the third angle of triangle : ";
    cin >> angle3;
    if(angle1 <90 && angle2 <90 && angle3 <90){
        cout <<"it is an Acute triangle ";
    }else if(angle1 ==90 || angle2 ==90 || angle3 ==90){
        cout <<"it is a Right triangle ";
    }else if(angle1 >90 || angle2 >90 || angle3 >90){
        cout <<"it is an Obtuse triangle ";
    }else{
        cout <<"invalid angles";
    }
    return 0;
}