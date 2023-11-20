#include<iostream>
using namespace std;
int main (){
    int i=0;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A'+i+j-2;
            cout << ch;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}