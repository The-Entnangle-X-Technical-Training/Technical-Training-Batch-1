//Pass or Fail
#include<iostream>
using namespace std;

int main(){
    int Marks = 0;

    cout<<"Enter Marks :";
    cin>>Marks;

    if(Marks >= 40){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}