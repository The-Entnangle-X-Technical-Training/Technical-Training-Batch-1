//Days to week,years and remaining days convertor
//(V)- total days,week,years and remaining days
//(O1)- input total days
//(O2)-years=totalDays/365;
//(O3)-weeks=(totalDays%365)/7;
//(O4)-remainingDays=(totalDays%365)%7;
//(O5)-display weeks,years,remaining days

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