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
   int colToSwap = 0;
   int colToSwapTo = 0;

   cout<<"Enter column index for column to swap : ";
   cin>>colToSwap;
   cout<<"Enter column index to be swapped by : ";
   cin>>colToSwapTo;
   if((colToSwap >= 0 && colToSwap < inputColumns) && (colToSwapTo >= 0 && colToSwapTo < inputColumns)){

   int newArray[inputRows];

    for(int i = 0; i < inputRows; i++){

        newArray[i] = array[i][colToSwap];
        array[i][colToSwap] = array[i][colToSwapTo];
        array[i][colToSwapTo] = newArray[i];            
    }
for(int row = 0; row < inputRows; row++){
    cout<<"\n";
    for(int col = 0;col< inputColumns;col++){
    cout<<array[row][col]<<" ";
}
}

   }
   else{
    cout<<"Wrong range for the columns";
   }
    return 0;

}