//Pass or Fail

#include<iostream>
using namespace std;

int main(){

    int studentMarks=0;
    cout<<"Marks(out of 100)=";
    cin>>studentMarks;

    if(studentMarks>=40){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }

}