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
    
    
    cout<<"sideofsquare"<<endl;
    cout<<"area"<<area<<endl;
    cout<<"perimeter"<<perimeter<<endl;
    

    return 0;

}




