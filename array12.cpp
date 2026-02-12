#include <iostream>
using namespace std;

int checkDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++){
           if(arr[i] == arr[j]){
           return 1;
        }
    }
  }
    return 0;
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

    if (checkDuplicates(arr, n))
        cout << "Duplicate elements present";
    else
        cout << "No duplicate elements";

    return 0;
}
