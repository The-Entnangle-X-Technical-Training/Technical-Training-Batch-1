#include<iostream>
using namespace std;

int main(){
    int inputRows = 0;
    int inputColumns = 0;
    

    cout<<"Enter the number of rows for the matrices: ";
    cin>>inputRows;
    cout<<"Enter the number of columns for the matrices: ";
    cin>>inputColumns;

    
    int array[inputRows][inputColumns];
    int newArray[inputRows][inputColumns];

    cout<<"Enter elements for Matrix 1\n";

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>array[i][j];
    }
}

cout<<"enter element for Matrix 2\n";
for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>newArray[i][j];
    }
}

for(int row = 0; row < inputRows; row++){
    for(int col = 0; col < inputColumns; col++){

    newArray[row][col] = array[row][col] + newArray[row][col];    
    }}

cout<<"Sum of Matrix 1 and 2 : \n";
    for(int row = 0;row< inputRows;row++){
        cout<<"\n";
        for(int col = 0; col < inputColumns; col++){
            cout<<newArray[row][col]<<" ";
}
}
    return 0;

}