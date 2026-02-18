//Problem 21: Check Triangle Validity by Angles

#include<iostream>
using namespace std;

int main(){

    int angle1,angle2,angle3=0;

    cout<<"Angle1=";
    cin>>angle1;

    cout<<"Angle2=";
    cin>>angle2;


    cout<<"Angle3=";
    cin>>angle3;


    if(angle1+angle2+angle3==180){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
return 0;
    
}