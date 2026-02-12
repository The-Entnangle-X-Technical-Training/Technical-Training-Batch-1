#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    return sum;
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

    cout << "Sum of array elements = " <<sumArray(arr, n);

    return 0;
}
