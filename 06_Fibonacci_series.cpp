#include<iostream>
using namespace std;
    int main (){
        int a =0;
        int b =1;
        int n=12;
        cout <<a<<" "<<b <<" ";
        for( int i=0;i<=n; i++){
             int sum= a+b;
            cout<<sum<<" ";
            a=b;
            b= sum;
        }
    }