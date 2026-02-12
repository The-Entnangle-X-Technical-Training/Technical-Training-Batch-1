#include <iostream>
using namespace std ;

int main () {
    int number, multiple , count = 0;

    cout<<"enter a number : ";
    cin>>number;

    cout<<"enter a multiple : ";
    cin>>multiple;

    for (int i=1; i<=number; i++) {
        if (i % multiple == 0) {
            count++;
        }
    } 

    cout<<"total count = "<<count;
    return 0;

}