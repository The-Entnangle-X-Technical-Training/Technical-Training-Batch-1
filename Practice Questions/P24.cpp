// BMI Calculator
//(V)- weight,height,BMI
//(O1)- input weight, height
//(O2)-BMI =weight/height*height
//(O3)- Display BMI

#include<iostream>
using namespace std;

int main(){
    int weight;
    int height;
    int BMI;

    cout<<"Weight=";
    cin>>weight;

    cout<<"Height=";
    cin>>height;

    BMI = weight/(height*height);
    cout<<"BMI="<<BMI;
}

