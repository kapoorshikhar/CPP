#include <iostream>
using namespace std;\
    int ans=1;  
 int factorial(int a ){
   
    while (a>1){
         ans= ans*a;
         a--;
        
    }
    return ans;
    
 }

int main(){
    int a ;
    cout << "Enter the number whose factorial is being calculated : ";
    cin>> a ;
    int answer =factorial(a);
    cout<<" The answer is : "<<answer;
}    
