#include<iostream>
using namespace std;
int main (){
    int i=1;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch ='A'+j-1;
            cout << ch;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}