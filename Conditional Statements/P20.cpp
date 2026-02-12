//BMI Category

#include<iostream>
using namespace std;

int main(){

    float weight;
    float height;
    float BMI;

    cout<<"Weight=";
    cin>>weight;

    cout<<"Height=";
    cin>>height;

    BMI = weight/(height*height);

    if(BMI<18.5){
        cout<<"underweight";
    }
    else if(BMI<=29.9){
        cout<<"Overweight";
    }
    else{
        cout<<"Obese";
    } 
}
