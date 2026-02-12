#include <iostream>
using namespace std;

void swap(int arr[], int n){
    if(n <= 1){
        return;
    }
      int temp = arr[0];
      arr[0] = arr[n-1]; 
      arr[n-1] = temp;
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

    swap(arr, n);

    cout<<"After swapping first and last element ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }

    return 0;
}
