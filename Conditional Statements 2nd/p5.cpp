//Problem 5: Check if Age is Adult

#include<iostream>
using namespace std;

int main(){

    int age=0;
    cout<<"Age=";
    cin>>age;

    if(age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"Minor";
    }
return 0;
}