//  LEAP YEAR CHECKER

// variable = year , 
// O1 = input year
// O2 = if a year is divisible by 4
// O3 = display leap year
// O4 = else 
// O5 = display not leap year

#include <iostream>
using namespace std;
int main(){

int inputyear=0;

cout<<"enter a year:";
cin>>inputyear;

if (inputyear%4==0){
    cout<<"leap year";
}

else{
    cout<<"not leap year";
}

return 0;

}