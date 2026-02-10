// Problem 20: Pyramid - Stars (Centered)
//    *
//   * *
//  * * *
// * * * *

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
        for(int k = 0; k <= num - i; k++){
                cout<<" ";
            }
        for(int j = 1; j <= i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}