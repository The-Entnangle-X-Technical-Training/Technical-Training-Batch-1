#include <iostream>
using namespace std;

int main()
{
    float costPrice, sellingPrice;
    float amount;

    cout << "Enter cost price: ";
    cin >> costPrice;

    cout << "Enter selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        cout << "Profit = " << amount << endl;
    }
    else if (costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;
        cout << "Loss = " << amount << endl;
    }
    else
    {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
