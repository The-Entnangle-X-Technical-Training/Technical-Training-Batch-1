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

    for(int i = 0; i < inputRows; i++){

        cout<<"\n";
        for(int j = 0; j < inputColumns; j++){
            cout<<array[i][j]<<"  ";
}
}

    return 0;

}