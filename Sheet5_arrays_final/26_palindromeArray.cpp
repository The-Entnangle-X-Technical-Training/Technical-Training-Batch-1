// Check if array is palindrome

#include<iostream>
using namespace std;

int main(){
    int sizeArray = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> sizeArray;

    int array[sizeArray];
    

    for(int i = 0; i < sizeArray; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>array[i];
    }
    bool isPalindrome = true;
    int last = sizeArray - 1;

    for(int i = 0; i < sizeArray; i++){    
        if(array[i ] != array[last-i]){
            isPalindrome = false;
            break;
        }   
    }

    if(isPalindrome){
        cout<<"Array is Palindrome";
    }
    else{
        cout<<"Array is not Palindrome ";
    }
    
    return 0;
   
}
