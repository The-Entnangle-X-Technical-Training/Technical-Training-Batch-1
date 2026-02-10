// AREA OF PERIMETER OF RECTANGLE

// variable = area of rectangle, area ,perimeter
// O1 = input length , breadth
// O2 = area = length * breadth
// O3 = perimeter = 2 * (length + breadth)
// O4 = display area and perimeter


#include <iostream>
using namespace std;
int main () {

    int length = 0;
    int breadth = 0;
    int areaofrectangle = 0;
    int perimeterofrectangle = 0;

    cout<<"length:";
    cin>>length;

    cout<<"breadth:";
    cin>>breadth;

    areaofrectangle= ( length * breadth);
    perimeterofrectangle= 2*(length+breadth);

    cout<<"areaofrectangle"<<areaofrectangle<<endl;
    cout<<"perimeterofrectangle"<<perimeterofrectangle<<endl;

    return 0 ;


}