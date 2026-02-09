#include <iostream>
using namespace std;

int main() {
    float side, area, perimeter;

    cout << "Enter side of the square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "Area of square = " << area << endl;
    cout << "Perimeter of square = " << perimeter << endl;

    return 0;
}
