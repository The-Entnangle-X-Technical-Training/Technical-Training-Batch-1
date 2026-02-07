//Area and Perimeter of Rectangle
//(V)- length and width of Rectangle,area of Rectangle,perimeter of Rectangle
//(O1)- input length of Rectangle, width of Rectangle
//(O2)- area of Rectangle=length*width, perimeter of Rectangle=2(length+width)

#include<iostream>
using namespace std;

int main(){
   int length=0;
   int width=0;
   int areaOfrectangle=0;
   int perimeterOfrectangle=0;

    cout<<"Length of Rectangle:";
    cin>>length;

    cout<<"width of Rectangle:";
    cin>>width;

    areaOfrectangle=length*width;
    cout<<"Area of Rectangle="<<areaOfrectangle<<endl;

    perimeterOfrectangle=2*length + width;
    cout<<"Perimeter of Rectangle="<<perimeterOfrectangle;
    
}