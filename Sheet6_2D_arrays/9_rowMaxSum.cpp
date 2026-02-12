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
int sumOfRows = 0;
int maxSumRow = 0;

    for(int i = 0; i < inputRows; i++){
        int sum = 0;

        for(int j = 0; j < inputColumns; j++){
            sum = sum + array[i][j];
            
}
if(sum > sumOfRows){
    sumOfRows = sum;
    maxSumRow =i;
}
}
cout<<"\n Maximun Sum of row "<<sumOfRows<<" at Row Index :"<<maxSumRow;
    return 0;

}