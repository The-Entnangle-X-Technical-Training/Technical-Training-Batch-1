//Problem 24: Temperature Check

#include<iostream>
using namespace std;

int main(){

    int temperature=0;

    cout<<"Temperature=";
    cin>>temperature;

    if(temperature < 15){
        cout<<"Cold";
    }
    else if(temperature>=15 && temperature<=30){
        cout<<"Normal";
    }
    else {
        temperature>30;
        cout<<"Hot";
    }
return 0;
}