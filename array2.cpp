#include <iostream>
using namespace std;

void printReverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    printReverse(arr, n);

    return 0;
}
