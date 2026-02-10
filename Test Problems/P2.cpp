//Nearest Number Divisible by Y

#include<iostream>
using namespace std;

int main(){

    int X;
    int Y;
    int closestNumber;
    
    cout<<"X:";
    cin>>X;

    cout<<"Y:";
    cin>>Y;

    closestNumber=X-(X%Y);
    cout<<closestNumber;

}