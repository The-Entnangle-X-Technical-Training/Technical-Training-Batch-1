//Average of marks in 5 subjects
//(V)- maths,physics,chemistry,english,hindi,total marks,average
//(O1)- input maths,physics,chemistry,english,hindi
//(O2)- totalMarks = maths + physics + chemistry + english+ hindi
//(O3)- average = totalMarks/5
//(O4)- display average of 5 subjects

#include<iostream>
using namespace std;

int main(){
    int maths=0;
    int physics=0;
    int chemistry=0;
    int english=0;
    int hindi=0;
    int totalMarks=0;
    int average=0;

    cout<<"Maths=";
    cin>>maths;

    cout<<"Physics=";
    cin>>physics;

    cout<<"Chemistry=";
    cin>>chemistry;

    cout<<"English=";
    cin>>english;

    cout<<"Hindi=";
    cin>>hindi;

    totalMarks=maths + physics + chemistry + english+ hindi;
    cout<<"Total marks="<<totalMarks<<endl;

    average=totalMarks/5;
    cout<<"Average="<<average<<endl;
}