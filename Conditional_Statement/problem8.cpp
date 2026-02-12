//check divisible by 5 :
#include<iostream>
using namespace std;
int main(){
    int Number = 0;
    cout<<"Enter Number :";
    cin>>Number;

    if(Number % 5 == 0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }

    return 0;
}