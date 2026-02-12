//BMI calculator using formula : weight / height * height ;
#include<iostream>
using namespace std;
int main(){
    float weight = 0 , height = 0 , BMI = 0 ;
    cout<<"Enter weight :";
    cin>>weight;
    cout<<"Enter height :";
    cin>>height;

    BMI = weight / (height * height) ;
    cout<<"BMI is :"<<BMI;
    return 0;
}