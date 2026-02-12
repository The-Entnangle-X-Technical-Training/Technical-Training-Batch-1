// eligibility for voting

// variable = person age
// O1 = input person age
// O2 = if the person age >= 18
// O3 = eligible
// O4 = not eligible

#include <iostream>
using namespace std;
int main(){

int personage = 0;

cout<<"enter a personage:";
cin>>personage;

if (personage >= 18){
    cout<<"eligible";
}

else{
    cout<<"not eligible";
}

return 0;

}