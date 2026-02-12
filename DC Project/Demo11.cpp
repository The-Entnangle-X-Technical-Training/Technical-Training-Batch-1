//Area of circle

#include<iostream>
using namespace std;
int main(){
    float r, area;
    float PI = 3.14159;

    cout << "Enter radius of the circle: ";
    cin >> r;

    area = PI * r * r;

    cout << "\nArea of the circle = " << area << endl;

    return 0;
}