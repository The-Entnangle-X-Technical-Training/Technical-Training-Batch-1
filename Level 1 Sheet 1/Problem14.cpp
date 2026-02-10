#include<iostream>
using namespace std;
int main() {

    int Length, Breadth;
    int area = 0;
    int perimeter = 0;

    cout<<"Enter the length ="<<endl;
    cin>>Length;

    cout<<"Enter the breadth ="<<endl;
    cin>>Breadth;

    area = Length*Breadth;
    perimeter = 2*(Length+Breadth);

    cout<<"The area of rectangle ="<<area<<endl;
    cout<<"The perimeter of rectangle ="<<perimeter<<endl;

}



