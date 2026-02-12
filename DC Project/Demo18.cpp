//Average and marks in 5 sub

#include<iostream>
using namespace std;
int main(){

    int sub1, sub2, sub3, sub4, sub5;
    int total=0;
    int average;

    cout<<" Enter subject1 = ";
    cin>>sub1;
    cout<<" Enter subject2 = ";
    cin>>sub2;
    cout<<" Enter subject3 = ";
    cin>>sub3;
    cout<<" Enter subject4 = ";
    cin>>sub4;
    cout<<" Enter subject5 = ";
    cin>>sub5;

    total = sub1+sub2+sub3+sub4+sub5;
    average = total/5;

    cout<<"sum of total = " << total << endl;
    cout<<"average = " << average << endl;

    return 0;

}