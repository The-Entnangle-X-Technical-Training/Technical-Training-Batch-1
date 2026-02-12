#include <iostream>
using namespace std;

int AverageArray(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
     int avg = sum/n;
    return avg;
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

    cout << "Average of array elements = " <<AverageArray(arr, n);

    return 0;
}
