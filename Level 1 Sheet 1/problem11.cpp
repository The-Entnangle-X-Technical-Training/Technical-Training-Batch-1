#include<iostream>
using namespace std;

int main() {
    
    float radius;
    float pie = 3.14;
    float result = 0; 
    
    cout<<"Enter the radius = "<<endl;
    cin>>radius;

    result = pie * radius * radius;
    cout<<"The area of the circle is = "<<result<<endl;
}