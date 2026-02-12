#include <iostream>
using namespace std;

void findPosition(int arr[], int n, int key) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << i + 1 << " ";
            found = 1;
        }
    }
----
    if (found == 0) {
        cout << "-1";
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

    cout << "Positions of " << key << " are: ";
    findPosition(arr, n, key);

    return 0;
}
