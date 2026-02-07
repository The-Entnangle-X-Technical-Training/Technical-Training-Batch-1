//seconds to Hours,minutes,and remaining seconds
//(V)- total seconds,hours,minutes and remaining seconds
//(O1)- input total seconds
//(O2)-hours=totalSeconds/3600;
//(O3)-remainingSeconds=totalSeconds%3600;
//(O4)-minutes=remainingSeconds/60;
//(O5)-seconds=remainingSeconds%60;
//(O6)-display hours,minute,remaining seconds
#include<iostream>
using namespace std;

int main(){
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;
    int remainingSeconds;

    cout<<"Enter the number of seconds:";
    cin>>totalSeconds;

    hours=totalSeconds/3600;
    remainingSeconds=totalSeconds%3600;
    minutes=remainingSeconds/60;
    seconds=remainingSeconds%60;

    cout<<"seconds is equal to:"<<totalSeconds<<endl;
    cout<<"hours:"<<hours<<endl;
    cout<<"minutes:"<<minutes<<endl;
    cout<<"remainingSeconds:"<<seconds<<endl;

    

}