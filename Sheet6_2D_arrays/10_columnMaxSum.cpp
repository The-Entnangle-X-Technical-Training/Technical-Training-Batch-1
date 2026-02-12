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
int sumOfColumns = 0;
int maxSumColumn = 0;

    for(int col = 0; col < inputColumns; col++){
        int sum = 0;

        for(int row = 0; row < inputRows; row++){
            sum = sum + array[row][col];
            
}
if(sum > sumOfColumns){
    sumOfColumns = sum;
    maxSumColumn =col;
}
}
cout<<"\n Maximun Sum of column "<<sumOfColumns<<" at Column Index :"<<maxSumColumn;
    return 0;

}