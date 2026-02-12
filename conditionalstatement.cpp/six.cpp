#include<iostream>
using namespace std;

int main() {
    char character;
    cout << "enter a character: ";
    cin >> character;

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << "the character is an alphabet" << endl;
    }

    else if ((character >= '0' && character <= '9')) {
        cout << "the character is a digit" << endl;
    }

    else if ((character >= '!' && character <= '/') || (character >= ':' && character <= '@') || (character >= '[' && character <= '`') || (character >= '{' && character <= '~')) {
        cout << "the character is a special symbol" << endl;
    }
    
    else {
        cout << "the character is not valid" << endl;
    }

    return 0;
}