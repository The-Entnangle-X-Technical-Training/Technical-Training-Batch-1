#include<iostream>
using namespace std;

int main(){
    int inputRows = 0;
    int inputColumns = 0;
    int target = 0;
    bool found = false;
   
    cout<<"Enter the number of rows : ";
    cin>>inputRows;
    cout<<"Enter the number of columns : ";
    cin>>inputColumns;
    cout<<"Enter the target element : ";
    cin>>target;

    int array[inputRows][inputColumns];

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
        cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
        cin>>array[i][j];
    }
}

    for(int i = 0; i < inputRows; i++){
        for(int j = 0; j < inputColumns; j++){
            if(array[i][j] == target){
                cout<<"Element found at index ["<<i<<"]["<<j<<"]";
                found = true;
                break;
            }
            
            
}
}
if(found == false){
    cout<<"Element not found";
}

return 0;

}