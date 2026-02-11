// checking whether the number is positive, negative, or zero
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number a:" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "the number is positive" << endl;
    }
    else if (a < 0)
    {
        cout << "the number is negative" << endl;
    }
    else
    {
        cout << "the number is zero" << endl;
    }
    return 0;
}
