// checking weather the number is in b etween 1 to 10
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number " << endl;
    cin >> num;
    if (1 <= num || num >= 10)
    {
        cout << " yes the number is in range between 1 to 10" << endl;
    }
    else
    {
        cout << "no the number is not in range between 1 to 10" << endl;
    }
}