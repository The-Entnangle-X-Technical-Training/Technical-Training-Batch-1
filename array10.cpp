#include <iostream>
using namespace std;

int countOccurrence(int arr[],int n,int key){
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            count++;
        }
    return count;
 }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout<<"key appears "<<countOccurrence(arr, n,key)<< " times";

    return 0;
}
