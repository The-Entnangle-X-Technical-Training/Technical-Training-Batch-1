#include<iostream>
using namespace std;
int main() {

    int side;
    int area = 0;
    int perimeter = 0;

    cout<<"Enter the side = "<<endl;
    cin>>side;

    area = side*side;
    cout<<"The area of square = "<<area<<endl;

    perimeter = 4*side;
    cout<<"The perimeter of square = "<<perimeter<<endl;
    
}