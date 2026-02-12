//Percentage Calculator

#include<iostream>
using namespace std;
int main(){
    int subject1, subject2, subject3;
    int total;
    float percentage;

    cout<<"Enter marks of subject1 :";
    cin>>subject1;
    cout<<"Enter marks of subject2 :";
    cin>>subject2;
    cout<<"Enter marks of subject3 :";
    cin>>subject3;

    total = subject1+subject2+subject3;

    percentage = (total/300.0)*100;

    cout<<" \nTotal Marks = " << total << " out of 300 " << endl;
    cout<<" Percentage = " << percentage << "%" << endl;

    return 0;
}