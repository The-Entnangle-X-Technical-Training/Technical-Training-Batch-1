//days converter

#include <iostream>
using namespace std;
int main()
 {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int years = days / 365;
    int weeks = (days % 365) / 7;
    int remaining_days = (days % 365) % 7;

    cout << days << " days = "
              << years << " years, "
              << weeks << " weeks, "
              << remaining_days << " days.\n";

    return 0;
}