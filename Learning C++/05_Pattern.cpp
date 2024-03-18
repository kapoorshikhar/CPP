#include<iostream>
using namespace std;
int main ()
{
int n ;
cout << " Enter the the value of N here : ";
cin >> n;
int i=1;    

while(i<=n){
    int j=1;
    // int l =i*j
    while(j<=n){
        cout << i*j;
        j=j+1;   

        }
        cout << endl;
       i=i+1; 
    }
    
}