//calculate electricity bill :
#include<iostream>
using namespace std;

int main(){

    int totalUnit = 0;
    int Rate = 0;
    int Bill = 0;

    cout<<"Enter total unit :";
    cin>>totalUnit;
    cout<<"Enter Rate of per unit :";
    cin>>Rate;

    Bill = totalUnit * Rate ;
    cout<<"The Electricity Bill is :"<<Bill;

    return 0;
}