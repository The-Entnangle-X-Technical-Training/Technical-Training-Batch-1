//  TRIANGLE TYPE BY ANGLE

#include <iostream>
using namespace std;

int main(){
     
    int angle = 0;
    int angleOne = 0;
    int angleTwo = 0 ;
    int angleThree = 0 ;
    int sum = 0 ;

    cout<<"enter the angleOne";
    cin>>angleOne;

    cout<<"enter the angleTwo";
    cin>>angleTwo;

    cout<<"enter the angleThree";
    cin>>angleThree;

sum= angleOne + angleTwo + angleThree;

if (sum!=180 || angleOne<= 0 || angleTwo <= 0 || angleThree <=0){
    cout<<"not an triangle";
    }

else if(angleOne == 90 || angleTwo == 90 || angleThree == 90){    // 90 60 30
        cout<<"right triangle";
    }    

else if(angleOne < 90 && angleTwo < 90 && angleThree < 90 ){     // 90 60 30
        cout<<"acute triangle";
    } 
else{
    cout<<"obtuse triangle:";  // 100 50 30
}         
 
  
return 0;


}