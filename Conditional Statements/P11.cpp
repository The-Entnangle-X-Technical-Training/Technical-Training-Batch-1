//Triangle validity by Angles

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

    if(sumOfangles=180){
        sumOfangles=angle1+angle2+angle3;
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}