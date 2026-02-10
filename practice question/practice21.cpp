//  DISCOUNT PRICE CALCULAOTR

// variable = final price , discount percentage ,original Price
// O1 = input original price
// O2 = Original price = original price*100/total price
// O3 = display final price

#include <iostream>
using namespace std ;
int main(){

    int finalprice = 0;
    int originalprice = 0;
    int discountpercentage = 0;
    int totalprice = 0;

    cout<<"originalprice:";
    cin>>originalprice;

    cout<<"discountpercentage:";
    cin>>discountpercentage;

    discountpercentage = originalprice * discountpercentage / 100;
    finalprice= originalprice - discountpercentage;

    cout<<"originalprice"<<originalprice<<endl;
    cout<<"finalprice"<<finalprice<<endl;

    return 0;

}
