//Area and Perimeter of Square
//(V)- side of square,area of square,perimeter of square
//(O1)- input side of square
//(O2)- area of square=side*side, perimeter of square=4*side

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
    cout<<"Perimeter of square is:"<<perimeterOfsquare<<endl;
}