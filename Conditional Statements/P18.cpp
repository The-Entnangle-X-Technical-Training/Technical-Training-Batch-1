//Triangle Validity by Sides

#include<iostream>
using namespace std;

int main(){
    int side1;
    int side2;
    int side3;

    cout<<"side1=";
    cin>>side1;

    cout<<"side2=";
    cin>>side2;

    cout<<"side3=";
    cin>>side3;

    if(side1+side2>side3){
        cout<<"Valid Triangle";
    }
    else if(side1+side3>side2){
        cout<<"Valid Triangle";
    }
    else if(side2+side3>side1){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
return 0;    
}

