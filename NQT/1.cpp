#include<iostream>
using namespace std;

int main(){
    double inputWt = 0;
    double inputDt = 0;

    int baseCost = 5;
    int costPerWeight = 2;
    float costPerDistance = 0.05; 

    cout<<"Enter the weight of package in kg : ";
    cin>>inputWt;
    cout<<"enter distance to the destination in km : ";
    cin>>inputDt;

    if((1<=inputWt && inputWt<=10000000) && (1 <=inputDt && inputDt <= 10000000)){
        
        cout<<"Total Cost is $"<<int(baseCost + inputDt* costPerDistance + inputWt * costPerWeight);
    }
    else{
        cout<<"The values should be in range of 1 to 10^7";
    }
    return 0;
}