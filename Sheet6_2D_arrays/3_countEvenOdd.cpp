#include<iostream>
using namespace std;

int main(){
    int inputRows = 0;
    int inputColumns = 0;
    int evenCounter = 0;
    int oddCounter = 0;

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

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
            if(array[i][j] % 2 == 0){
                evenCounter++;
            }
            else{
                oddCounter++;
            }
}
}
cout<<"\nCount of Even numbers : "<<evenCounter;
cout<<"\nCOunt of Odd numbers : "<<oddCounter;
    return 0;

}