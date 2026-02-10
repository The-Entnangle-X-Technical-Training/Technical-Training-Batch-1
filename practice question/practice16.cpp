// DAYS - YEARS WEEK DAYS

// Varible = inputdays years , week , days , temp
// O1 = input -> inputdays
// O2 = years = inputdays / 365
// O3 = inputdays =inputdays % 365
// O4 = week = inputdays/7
// O5 = remaining days =inputdays %7
// O6 = years week remainingdays

#include <iostream>
using namespace std;
int main(){

    int inputdays = 0;
    int years = 0;
    int week =0;
    int remainingdays=0;
    

    cout<<"inputdays:";
    cin>>inputdays;
    
    
    years = inputdays / 365;
    inputdays = inputdays % 365;
    week = inputdays/ 7;
    remainingdays = inputdays%7;

    cout<<"years"<<years<<endl;
    cout<<"week"<<week<<endl;
    cout<<"remainingdays"<<remainingdays<<endl;

    return  0 ;



}