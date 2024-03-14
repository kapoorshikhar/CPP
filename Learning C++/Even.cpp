#include <iostream>
using namespace std;
 
 bool isEven(int num1){
   if (num1&1){
       return 1;
   }
    else {
        return 0;
    }
    
        
 }

int main(){
    int a ;
    cout << "Enter the number whose Even is being calculated : ";
    cin>> a ;
    int answer =isEven(a);
    cout<<" The answer is : "<<answer;
}    
