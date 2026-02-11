//find area and perimeter of square

#include <iostream>
using namespace std;

int main()
 {
        double side;
        cout << "Enter the side length of the square: ";
        cin >> side;

        double area = side * side;
        double perimeter = 4 * side;

        cout << "Area of square: " << area << endl;
        cout << "Perimeter of square: " << perimeter << endl;

        return 0;
    }