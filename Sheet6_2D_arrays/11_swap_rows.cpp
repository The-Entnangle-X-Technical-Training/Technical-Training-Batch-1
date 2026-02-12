//Swap 2 rows
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

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>array[i][j];
    }
}
   int rowToSwap = 0;
   int rowToSwapTo = 0;

   cout<<"Enter row index for row to swap : ";
   cin>>rowToSwap;
   cout<<"Enter row index to be swapped by : ";
   cin>>rowToSwapTo;
   if((rowToSwap >= 0 && rowToSwap < inputRows) && (rowToSwapTo >= 0 && rowToSwapTo < inputRows)){

   int newArray[inputColumns];

    for(int i = 0; i < inputColumns; i++){

        newArray[i] = array[rowToSwap][i];
        array[rowToSwap][i] = array[rowToSwapTo][i];
        array[rowToSwapTo][i] = newArray[i];            
    }
for(int row = 0; row < inputRows; row++){
    cout<<"\n";
    for(int col = 0;col< inputColumns;col++){
    cout<<array[row][col]<<" ";
}
}

   }
   else{
    cout<<"Wrong range for the rows";
   }
    return 0;

}