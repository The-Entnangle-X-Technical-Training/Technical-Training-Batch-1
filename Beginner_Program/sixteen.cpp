//calculate days of year week day converter :
#include<iostream>
using namespace std;
int main(){
    int totaldays ;
    int year , week , days ;
    cout<<"enter total days :";
    cin>>totaldays;
    year = totaldays / 365;
    totaldays = totaldays % 365 ;
    week = totaldays / 7 ;
    days = totaldays % 7 ;
    cout<<"years are :"<<year<<endl;
    cout<<"weeks are :"<<week<<endl;
    cout<<"days are :"<<days;
    
    return 0;
}