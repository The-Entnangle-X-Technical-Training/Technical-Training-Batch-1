#include<iostream>
using namespace std;

int main() {

    char character;
    cout << "enter a character: ";
    cin >> character;

    if ((character >= 'a' && character <= 'z'))
    {
        cout << "the character is a lowercase alphabet" << endl;
    }

    else if ((character >= 'A' && character <= 'Z')) {
        cout << "the character is an uppercase alphabet" << endl;
    }

    else {
        cout << "the character is not an alphabet" << endl;
    }
    return 0;
}