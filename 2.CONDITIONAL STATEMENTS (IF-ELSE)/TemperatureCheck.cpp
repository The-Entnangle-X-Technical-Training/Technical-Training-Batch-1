#include <iostream>
using namespace std;

int main() {
    int temperature;

 
    cout << "Enter temperature: ";
    cin >> temperature;


    if (temperature < 15) {
        cout << "Cold" << endl;
    } 
    else if (temperature <= 30) { // 15 to 30
        cout << "Normal" << endl;
    } 
    else { // temperature > 30
        cout << "Hot" << endl;
    }

    return 0;
}
