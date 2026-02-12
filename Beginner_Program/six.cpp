//total marks and percentage :
#include<iostream>
using namespace std;
int main(){
    int maths , science , english , totalmarks;

    cout<<"enter maths marks :";
    cin>>maths;
    cout<<"enter science marks :";
    cin>>science;
    cout<<"enter english marks :";
    cin>>english;

    totalmarks = maths + science + english ;
    cout<<"total marks is :"<<totalmarks<< " out of 300"<<endl;

    int percentage;
    percentage = totalmarks / 3 ;
    cout<<"the percentage is :"<<percentage;

    return 0;
}