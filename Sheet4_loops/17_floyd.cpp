// Problem 17: Floyd's Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
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
    int number = 1;
    for(int i = 1; i <= num; i++){
            
        for(int j = 1 ; j <= i; j++){
            cout<<number<<" ";       
            number++;
            }
        cout<<endl;
        }
        
}