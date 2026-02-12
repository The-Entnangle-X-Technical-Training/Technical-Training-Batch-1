#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n, int k) {

    for (int r = 1; r <= k; r++) {

        int first = arr[0];   

        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;   
    }
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    rotateLeft(arr, n, k);

    cout << "Array after left rotation:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
