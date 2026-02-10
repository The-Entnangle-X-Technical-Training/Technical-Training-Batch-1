// Problem 14: Right Triangle - Same Number in Row
// 1
// 2 2
// 3 3 3
// 4 4 4 4

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
        for(int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}