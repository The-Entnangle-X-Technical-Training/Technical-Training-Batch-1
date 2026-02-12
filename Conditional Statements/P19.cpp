// Quadrant Finder

#include<iostream>
using namespace std;

int main(){

    int x;
    int y;

    cout<<"X=";
    cin>>x;

    cout<<"Y=";
    cin>>y;

    if(x>0 && y>0){
        cout<<"Ist Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"IInd Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"IIIrd Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"IVth Quadrant";
    }
    else{
        cout<<"Lies in origin";
    }
}