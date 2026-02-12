#include<iostream>
using namespace std;

int main(){
    int totalDays;
    int weeks;
    int years;
    int remainingDays;

    cout<<"Enter the number of days:";
    cin>>totalDays;

    years=totalDays/365;
    weeks=(totalDays%365)/7;
    remainingDays=(totalDays%365)%7;

    cout<<"days is equal to:"<<totalDays<<endl;
    cout<<years<<endl;
    cout<<weeks<<endl;
    cout<<remainingDays<<endl;


    return 0;

}