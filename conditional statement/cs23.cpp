// Character Position in Alphabet (First or Second Half)
// Character Position in Alphabet (First or Second Half)

#include <iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
    }

    if(ch >= 'A' && ch <= 'M'){
        cout << "First half of alphabet";
    }
    else if(ch >= 'N' && ch <= 'Z'){
        cout << "Second half of alphabet";
    }
    else{
        cout << "Invalid input";
    }

    return 0;
}
