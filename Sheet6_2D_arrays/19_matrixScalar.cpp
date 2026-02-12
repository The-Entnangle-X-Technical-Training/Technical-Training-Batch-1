#include<iostream>
using namespace std;

int main(){
    int inputRows = 0;
    int inputColumns = 0;
    int scalar = 0;
    

    cout<<"Enter the number of rows for the matrix: ";
    cin>>inputRows;
    cout<<"Enter the number of columns for the matrix: ";
    cin>>inputColumns;

    int array[inputRows][inputColumns];

    cout<<"\nEnter the scalar value to multiply to the matrix :";
    cin>>scalar;
    

    cout<<"Enter elements for Matrix \n";

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>array[i][j];
    }
}

for(int row = 0; row < inputRows; row++){
    for(int col = 0; col < inputColumns; col++){

    array[row][col] = array[row][col] * scalar;    
    }}

cout<<"Product of Matrix with scalar : \n";
    for(int row = 0;row< inputRows;row++){
        cout<<"\n";
        for(int col = 0; col < inputColumns; col++){
            cout<<array[row][col]<<" ";
}
}
    return 0;

}