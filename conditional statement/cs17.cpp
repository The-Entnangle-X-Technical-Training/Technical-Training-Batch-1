// Triangle type by sides

// variable = sideOne , sideTwo , sideThree , 
// O1 = sideOne , sideTwo , sideThree 
// O2 = if sideOne == sideTwo == sideThree
// O3 = display Equilateral triangle
// O4 = else if sideOne==sideTwo && sideTwo==sideThree && sideOne==sideThree
// O5 = display isosceles 
// O6 = else 
// O7 = sideOne =! sideTwo =! sideThree
// O8 = display scalene

#include <iostream>
using namespace std;
int main(){

    int sideOne = 0 ;
    int sideTwo = 0 ;
    int sideThree = 0 ;
    int Equilateraltriangle = 0 ;
    int isosceles = 0 ;
    int scalene = 0 ;

    cout<<"sideOne:";
    cin>>sideOne;

    cout<<"sideTwo:";
    cin>>sideTwo;

    cout<<"sideThree:";
    cin>>sideThree ;
    

if (sideOne == sideTwo && sideTwo== sideThree){
    cout<<"Equilateral triangle:";
}

else if (sideOne == sideTwo ||  sideTwo == sideThree || sideOne==sideThree){
    cout<<"isosceles:";
}

else {
    cout<<"scalene:";
}

return 0;


}
