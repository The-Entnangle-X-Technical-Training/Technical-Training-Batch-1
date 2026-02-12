//Area and perimeter of rectangle

#include<iostream>
using namespace std;
int main(){
    float length , width , perimeter , area;

    cout<<"Enter the length of rectangle: ";
    cin>>length; 

    cout<<"Enter the width of rectangle: ";
    cin >>width; 


    area = length * width;
    perimeter = 2 * (length + width);

    cout<< "\nArea of rectangle = " << area << endl;
    cout << "Perimeter of rectangle = " << perimeter << endl;

    return 0;

}