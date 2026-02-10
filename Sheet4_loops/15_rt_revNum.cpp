// Problem 15: Right Triangle - Reverse Numbers
// 1
// 2 1
// 3 2 1
// 4 3 2 1


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
        for(int i = 1; i <= num; i++){
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}