
#include<iostream>
using namespace std;

void createPrymid(int);

int main(){
    int inputRows = 0;

    cout<<"Enter number of rows : ";
    cin>>inputRows;
    
    createPrymid(inputRows);

    return 0;
}

void createPrymid(int num){

    for(int i = 1; i <= num; i++){
        for(int k = 0; k <= num - i; k++){
                cout<<" ";
            }
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}