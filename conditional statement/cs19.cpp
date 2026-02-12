// Quadrant Finder

#include <iostream>
using namespace std;
int main(){

    int x = 0;
    int y = 0;

    cout<<"x coordinates:";
    cin>>x;

    cout<<"y coordinates:";
    cin>>y;

    if (x>0 && y>0){
        cout<<"I:";

    }

    else if (x<0 && y>0){
        cout<<"II:";
    }

    else if (x<0 && y<0){
        cout<<"III:";
    }

    else if (x>0 && y<0){
        cout<<"IV:";
    }

    else if (x==0 && y==0){
        cout<<"origin:";
    }

    else if (x==0 && y!=0){
        cout<<"x axis:";
    }

    else{
        x==0 && y!=0;
        cout<<"y axis:";
    }

}


