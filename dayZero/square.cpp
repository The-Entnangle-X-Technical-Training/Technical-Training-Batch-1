#include<iostream>
using namespace std;

int main()
{
    int side, area, perimeter;
    cout<<"Enter the side of square : ";
    cin>>side;

    area = side * side;
    perimeter = 4 * side;

    cout<<"Side of square : "<<side<<endl;
    cout<<"Area of square : "<<area<<endl;
    cout<<"Perimeter of square : "<<perimeter<<endl;
    
}