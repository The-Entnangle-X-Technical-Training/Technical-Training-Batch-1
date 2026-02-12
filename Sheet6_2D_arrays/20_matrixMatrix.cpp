//(m x n) x (n x p) = (m x p)
#include<iostream>
using namespace std;

int main(){
    int matARows = 0;
    int matAColumns = 0;
    int matBRows = 0;
    int matBColumns = 0;
    

    cout<<"Enter the number of rows for matrix A : ";
    cin>>matARows;
    cout<<"Enter the number of columns for matrix A : ";
    cin>>matAColumns;
    cout<<"Enter the number of columns for matix B : ";
    cin>>matBColumns;

    matBRows = matAColumns;

    int matA[matARows][matAColumns];
    int matB[matBRows][matBColumns];

    int finalMatrix[matARows][matBColumns];

    cout<<"Enter elements for Matrix A\n";

    for(int i = 0; i < matARows; i++){
        for(int j = 0; j < matAColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>matA[i][j];
    }
}

cout<<"enter element for Matrix B\n";
for(int i = 0; i < matBRows; i++){
        for(int j = 0; j < matBColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>matB[i][j];
    }
}

for(int row = 0; row < matARows; row++){
    for(int col = 0; col < matBColumns; col++){
    
    finalMatrix[row][col] = 0;

        for(int i = 0; i < matBColumns; i++){
        finalMatrix[row][col]= finalMatrix[row][col] + (matA[row][i] *matB[i][col]);
    }}}

cout<<"Product of Matrix A and B : \n";
    for(int row = 0;row< matARows;row++){
        cout<<"\n";
        for(int col = 0; col < matBColumns; col++){
            cout<<finalMatrix[row][col]<<" ";
}
}
    return 0;

}