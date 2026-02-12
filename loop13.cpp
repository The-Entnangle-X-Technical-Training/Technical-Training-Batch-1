#include <iostream>
using namespace std ;

int main () {
    int number, count = 0;

    cout<<"enter a number : ";
    cin>>number;
    while (number!=0){
        number=number/10;
        count++;
    }

    cout<<"total count = "<<count;
    return 0;

}