//check if number is between 1 And 10 :
#include<iostream>
using namespace std;

int main(){
    int Number = 0;
    cout<<"Enter Number :";
    cin>>Number;
    if(Number >=1 && Number <=10){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0; 
}