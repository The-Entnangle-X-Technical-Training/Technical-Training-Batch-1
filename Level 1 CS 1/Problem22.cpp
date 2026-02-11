#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice;

    cout << "Enter Cost Price: ";
    cin >> costPrice;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        cout << "Profit" << endl;
    }
    else if (sellingPrice < costPrice) {
        cout << "Loss" << endl;
    }
    else {
        cout << "No Profit No Loss" << endl;
    }

    return 0;
}
