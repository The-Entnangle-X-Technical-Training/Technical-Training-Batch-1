#include <iostream>
using namespace std;

int productArray(int arr[], int n) {
    int product = 1;

    for (int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    return product;
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

    cout << "Product of array elements = " <<productArray(arr, n);

    return 0;
}
