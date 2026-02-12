//Area of triangle

#include<iostream>
using namespace std;
int main(){
    float base , height , area;

    cout<< " Enter base of triangle: ";
    cin>>base;
    cout<< " Enter the height: ";
    cin>>height;

    area = (base * height)/2;

    cout<< "\nArea of triangle: " << area << endl;

    return 0;
}