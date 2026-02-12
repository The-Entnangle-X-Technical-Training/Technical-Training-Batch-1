#include<iostream>
using namespace std;

int main(){
    int sideOfsquare;
    int areaOfsquare;
    int perimeterOfsquare;

    cout<<"Enter the sideOfsquare:";
    cin>>sideOfsquare;

    areaOfsquare=sideOfsquare*sideOfsquare;
    perimeterOfsquare=4*sideOfsquare;

    cout<<"Area of the square is:"<<areaOfsquare<<endl;
    cout<<"Perimeter of sqaure is:"<<perimeterOfsquare<<endl;

    

}