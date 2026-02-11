// CALCULATION THE  TOTAL ELECTRICITY BILLBASED ON UNIT if unit<=100 then 5 rupee and if unit>100 then 7 rupee 
#include <iostream>
using namespace std;
int main()
{
    int unit;
    float bill1, bill2, totalbill;
    cout<< "Enter the number of units: " << endl;
    cin >> unit;

    if (unit <= 100)
    {
        bill1 = unit * 5;
        cout<< "bill per unit for <=100 is:" << bill1 << endl;
    }

    else if(unit > 100)
    {

        bill2 = unit * 7;
        cout<< "bill per unit for >100 is:" << bill2 << endl;
    }

    totalbill = bill1 + bill2;
    cout<< "The total electricity bill is: " << totalbill << " Rs" << endl;

    return 0;
}
