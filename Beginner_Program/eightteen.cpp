#include<iostream>
using namespace std;
int main(){
    int m1 = 0,m2 ,m3,m4,m5;

    cout<<"enter maths marks :";
    cin>>m1;
    cout<<"enter science marks :";
    cin>>m2;
    cout<<"enter physics marks :";
    cin>>m3;
    cout<<"enter chemistry marks :";
    cin>>m4;
    cout<<"enter hindi marks :";
    cin>>m5;

    int totalmarks , average ;

    totalmarks = m1+m2+m3+m4+m5;

    average = totalmarks / 5;
    
    cout<<"total marks are :"<<totalmarks<<endl;
    cout<<"average of marks is :"<<average;
    return 0;
}