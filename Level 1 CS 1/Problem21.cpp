#include<iostream>
using namespace std;

int main () {

    int sum, angle1, angle2, angle3;

    cout<<"Enter the angle1 = ";
    cin>>angle1;
    cout<<"Enter the angle2 = ";
    cin>>angle2;
    cout<<"Enter the angle = ";
    cin>>angle3;

    if ((angle1 + angle2 + angle3) == 180) {
        cout<<"Valid.";
    }
    else {
        cout<<"Not valid.";
    }

}