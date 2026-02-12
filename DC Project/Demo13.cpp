//Area and perimeter of square

#include<iostream>
using namespace std;
int main(){
    float side , perimeter , area;

    cout<<" Enter the side of square: ";
    cin>>side;

    area = side * side;
    perimeter = 4 * side;

    cout << "\nArea of square = " << area << endl;
    cout << "\nPerimeter of square = " << perimeter << endl;

    return 0;
}