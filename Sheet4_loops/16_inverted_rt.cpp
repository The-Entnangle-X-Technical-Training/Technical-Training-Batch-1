// Problem 16: Inverted Right Triangle - Numbers
// 1 2 3 4
// 1 2 3
// 1 2
// 1


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
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}