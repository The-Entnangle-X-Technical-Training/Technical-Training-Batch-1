#include<iostream>
using namespace std;

int main(){
    int inputRows = 0;
    int inputColumns = 0;
    

    cout<<"Enter the number of rows : ";
    cin>>inputRows;
    cout<<"Enter the number of columns : ";
    cin>>inputColumns;

    
    int array[inputRows][inputColumns];
    int newArray[inputColumns][inputRows];

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>array[i][j];
    }
}

    for(int row = 0; row < inputColumns; row++){
        for(int col = 0; col < inputRows; col++){

        newArray[row][col] = array[col][row];    
    }}

cout<<"Matrix before transpose : \n";
    for(int row = 0;row< inputRows;row++){
        cout<<"\n";
        for(int col = 0; col < inputColumns; col++){
            cout<<array[row][col]<<" ";
}
}

cout<<"Matrix after transpose : \n";

    for(int row = 0;row< inputColumns;row++){
        cout<<"\n";
        for(int col = 0; col < inputRows; col++){
            cout<<newArray[row][col]<<" ";
}
}


    return 0;

}