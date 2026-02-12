// POSITIVE  , NEAGTIVE , 0R ZERO

// Varible = positive , negative , zero
// O1 = input positive , negative , zero
// O2 = if number > 0
// O4 = display positive
// O5 = if else number < 0  
// O6 = display negative
// O7 = else zero
// O8 = display number



#include <iostream>
using namespace std;
int main(){

int number=45;

cout<<"enter a number:";
cin>>number;

if (number>0){
    cout<<"positive number";
}

else if (number<0){
    cout<<"negative number";
}

else{
    cout<<"zero";
}

return 0;

}




