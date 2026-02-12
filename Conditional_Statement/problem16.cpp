//grade calculator 
#include<iostream>
using namespace std;
int main(){
    int marks = 0;
    cout<<"Enter Marks :";
    cin>>marks;

    if(marks >=90){
        cout<<"A Grade";
    }
    else if(marks>=70){
        cout<<"B Grade";
    }
    else if(marks>=40){
        cout<<"C Grade";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}