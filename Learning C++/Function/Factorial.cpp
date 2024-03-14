#include<iostream>
using namespace std;
 int factorial(int num1){
  int ans =1;
   while (num1>1){
   ans=ans*num1;
     num1--;
   }
   return ans;
 }
int main (){
  int a ;
  cout<< "Enter the number to whose factorial is to be calculated : " ;
  cin >> a;
  int answer = factorial (a);
  cout << " The factorial is : "<< answer;
}
