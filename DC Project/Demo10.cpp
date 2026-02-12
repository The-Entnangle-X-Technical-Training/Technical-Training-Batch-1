//Area of rectangle

#include<iostream>
using namespace std;
int main(){
    float length , width , area;

    cout<<" Length of rectangle: ";
    cin>>length;
    cout<<" Width of rectangle: ";
    cin>>width;

    area = length*width;

    cout<<"\nArea of rectangle = "<< area <<endl;

    return 0;
}