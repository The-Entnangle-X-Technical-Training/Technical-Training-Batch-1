// CHECK IF NUMBER IS SINGLE DIGIT , DOUBLE DIGIT , OR MORE

// varible = number , 
// O1 = input number
// O2 = if number >= 0 && number <= 10
// O3 = display single digit number
// O4 = else if >=10 && number <=99
// O5 = display double digit number
// O6 = else
// O7 = display more digit number


#include <iostream>
using namespace std;
int main(){

int number=0;

cout<<"enter a number:";
cin>>number;

if (number >= 0 && number <= 10){
    cout<<"single digit number";
}

else if (number >= 10 && number <= 99){
    cout<<"double digit number";
}

else{
    cout<<" more digit number";
}

return 0;

}