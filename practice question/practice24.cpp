// BMI CALCULATOR

// Variable = weight , height , BMI
// o1 = input weight , height
// O2 = BMI = weight / (h * h)
// O4 = display result


# include <iostream>
using namespace std;
int main(){

    
    double weight = 0;
    double height = 0;
    double BMI = 0;

    cout<<" enter weight:";
    cin>>weight;

    cout<<" enter height:";
    cin>>height;

    
    BMI= weight /  (height * height);
    
    cout<<"BMI"<<BMI<<endl;
    

    return 0;

}