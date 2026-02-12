#include <iostream>
using namespace std;

void countUnique(int arr[], int n) {
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++){
           if(arr[i] == arr[j]){
            count++;
           }
       }
       if(count == 1){
         cout <<"Unique Number "<< arr[i] <<" ";
          uniqueCount++;
       }
    }
    cout << endl;
    cout << "count of unique elements: " << uniqueCount << endl;
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

    countUnique(arr, n);

    return 0;
}
