//25: Number Range Classifier

#include<iostream>
using namespace std;

int main(){

    int number=0;

    cout<<"Number:";
    cin>>number;

    if(1=>number<=10){
        cout<<"Range(1-10)";
    }
    else if(11<=number<=50){
        cout<<"Range(11-50)";
    }
    else if(51<=number<=100){
        cout<<"Range(51-100)";
    }
    else if(101<=number<=500){
        cout<<"Range(101-500)";
    }
    else if(501<=number<=1000){
        cout<<"Range(501-1000)";
    }
    else{
        cout<<"above 1000";
    }
}