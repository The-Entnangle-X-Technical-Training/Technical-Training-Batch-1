//Area of Circle;
//(V)- Radius, Area
//(O1)- input radius
//(O2)- formula=pi*r^2
//(O3)-area of circle

#include<iostream>
using namespace std;

int main(){
    
    int radius,areaOfcircle;
    
    cout<<"Enter radius:";
    cin>>radius;
    
    areaOfcircle= (3.14)*radius*radius;
    cout<<"Area of Circle="<<areaOfcircle;
return 0;
}