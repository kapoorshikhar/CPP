#include <iostream>
using namespace std;
 
 bool isEven(int num1){
   if (num1&1){
       return 0;
   }
    else {
        return 1;
    }        
 }

int main(){
    int a ;
    cout << "Enter the number whose Even is being calculated : ";
    cin>> a ;
    int answer =isEven(a);
    if (answer == 0){
        cout <<  "The number is Odd : ";
    }
    if (answer==1) {
        
        cout <<  "The number is Even : ";
    }
}
