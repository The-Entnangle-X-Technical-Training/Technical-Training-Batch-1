// 29: Triangle Type by Angles


#include<iostream>
using namespace std;

int main(){

    int angle1;
    int angle2;
    int angle3;
    int sumOfangles;
    
    cout<<"Angle1=";
    cin>>angle1;

    cout<<"Angle2=";
    cin>>angle2;


    cout<<"Angle3=";
    cin>>angle3;

    if(angle1+angle2+angle3!=180){
        cout<<"invalid triangle";
    }
    else if(angle1<90 && angle2<90 && angle3<90){
        cout<<"Acute angle";
    }
    else if(angle1==90 || angle2==90 || angle3==90){
        cout<<"Right angle";
    }
    else {
        cout<<"obtuse triangle";
    }

}