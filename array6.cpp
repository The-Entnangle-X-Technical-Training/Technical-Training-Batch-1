#include <iostream>
using namespace std;

void countNum(int arr[], int n) {
    int pos = 0, neg = 0  ,zero = 0;

    for (int i = 0; i < n; i++) {
       if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;

    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "zero = " << zero << endl;
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

    countNum(arr, n);
    return 0;
}
