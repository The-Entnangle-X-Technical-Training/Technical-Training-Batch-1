#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"enter a number of elements : ";
    cin>>number;

    int arr[number]; 

    cout << "Enter elements: ";
    for (int i = 0; i < number; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = number -1; i >= 0; i--) {
        cout << arr[i] << " , ";
    }

    return 0;
}
