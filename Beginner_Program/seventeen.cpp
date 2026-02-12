//calculate total seconds into hour , minutes ,seconds :
#include<iostream>
using namespace std;
int main(){
    int totalseconds ;
    int hour , minutes , seconds ;
    cout<<"enter total seconds :";
    cin>>totalseconds;
    hour = totalseconds / 3600;
    totalseconds = totalseconds % 3600 ;
    minutes = totalseconds / 60;
    seconds = totalseconds % 60;
    cout<<"hours are :"<<hour<<endl;
    cout<<"minutes are :"<<minutes<<endl;
    cout<<"seconds are :"<<seconds;
    return 0;
}