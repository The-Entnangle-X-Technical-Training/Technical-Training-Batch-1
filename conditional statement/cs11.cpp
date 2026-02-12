// TRIANGLE VALIDITY BY ANGLES

// Varible = angleOne , angleTwo , angleThree , sum
// O1 = input angleOne , angleTwo , angleThree
// O2 = sum = angleOne + angleTwo + angleThree
// O3 = if sum of three angle is == 180
// O4 = display valid triangle
// O5 = else 
// O6 = display invalid triangle

# include <iostream>
using namespace std;
int main(){

    int angleOne = 0;
    int angleTwo = 0;
    int angleThree = 0;
    int sumofangle = 0;

    cout<<"enter angleOne:";
    cin>>angleOne;

    cout<<"enter angleTwo:";
    cin>>angleTwo;

    cout<<"enter angleThrree:";
    cin>>angleThree;

    sumofangle =angleOne + angleTwo + angleThree;

    if(sumofangle == 180){
        cout<<"valid triangle:";

    }

    else{
        cout<<"invalid triangle:";
    }
    
    return 0;
}

