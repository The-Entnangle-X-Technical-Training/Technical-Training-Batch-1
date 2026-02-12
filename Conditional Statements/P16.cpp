#include<iostream>
using namespace std;

int main(){

    int marks;

    cout<<"Marks=";
    cin>>marks;

    if(90<=marks && marks<=100){
        cout<<"A";
    }
    else if(80<=marks && marks<=89){
        cout<<"B";
    }
    else if(70<=marks && marks<=79){
        cout<<"C";
    }
    else if(60<=marks && marks<=69){
        cout<<"D";
    }
    else if(40<=marks && marks<=59){
        cout<<"E";
    }
    else{
        0<=marks && marks<=39;
        cout<<"F";
    }
}
    