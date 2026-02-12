#include <iostream>
using namespace std;

int main()
{
    float side;
    float area, perimeter;

    cout << "Enter side of the square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "Area of Square = " << area << endl;
    cout << "Perimeter of Square = " << perimeter << endl;

    return 0;
}
