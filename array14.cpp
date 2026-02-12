#include <iostream>
using namespace std;

void printFrequency(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        int count = 0;
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
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

    printFrequency(arr, n);
    return 0;
}
