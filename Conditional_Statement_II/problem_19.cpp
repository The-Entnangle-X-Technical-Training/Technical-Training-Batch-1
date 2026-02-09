// Problem 19: Quadrant Finder
// Write a program that takes x and y coordinates as input and displays which quadrant the point lies in (I,
// II, III, IV), or if it lies on an axis or origin.

#include <iostream>
using namespace std;

int main(){
    int x =0;
    int y = 0;
    cout << "Enter the x coordinates : ";
    cin >> x;
    cout << "enter the y coordinates : ";
    cin >>y;
    if(x>0){
        if(y > 0){
            cout << " the point lies in I quadrant";
        }else if (y<0){
           cout << " the point lies in IV quadrant"; 
        }   
    }else if (x <0){
        if(y > 0){
            cout << " the point lies in II quadrant";
        }else if (y<0){
           cout << " the point lies in III quadrant"; 
        } 
    }else{
        cout <<" it lies on an axis or origin ";
    }
    
    return 0;
}