// Problem 21: Inverted Pyramid - Stars

#include<iostream>
using namespace std;

void createTriangle(int);

int main(){
    int inputRows = 0;

    cout<<"Enter number of rows : ";
    cin>>inputRows;
    
    createTriangle(inputRows);

    return 0;
}

void createTriangle(int num){

    for(int i = num; i >= 1; i--){
        for(int k = num-i; k >= 0; k--){
                cout<<" ";
            }
        for(int j = 1; j <= i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}