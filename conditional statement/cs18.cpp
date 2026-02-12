// Triangle Validity by Sides

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
    

if (sideOne + sideTwo >=  sideThree){
    cout<<"valid triangle:";
}

else if (sideTwo +sideThree >= sideOne){
    cout<<"valid triangle:";
}

else if (sideThree + sideOne >= sideTwo) {
    cout<<"valid triangle:";
}
else{
    cout<<"invalid triangle:"; 
}

return 0;


}
