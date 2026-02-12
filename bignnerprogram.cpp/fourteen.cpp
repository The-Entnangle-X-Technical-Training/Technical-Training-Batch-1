#include <iostream>
using namespace std;

int main() {
    
    int length = 0;
    int breadth = 0;
    int area = 0;
    int perimeter = 0;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}