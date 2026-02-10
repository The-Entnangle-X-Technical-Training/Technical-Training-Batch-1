
// AREA OF PERIMETER OF square

// variable = side of square , area ,perimeter
// O1 = input area , perimeter
// O2 = area = side of square * side of square
// O3 = perimeter = 4 * side of perimeter
// O4 = display area and perimeter

#include <iostream>
using namespace std;
int main(){

    
    int sideofsquare,area,perimeter;

    cout<<"side of square:";
    cin>>sideofsquare;

    cout<<"area:";
    cin>>area;
    
    cout<<"perimeter:";
    cin>>perimeter;

    area=sideofsquare * sideofsquare;
    perimeter= 4*sideofsquare;
    
    
    
    cout<<"area"<<area<<endl;
    cout<<"perimeter"<<perimeter<<endl;
    

    return 0;

}




