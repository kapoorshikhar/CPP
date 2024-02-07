#include<iostream>
using namespace std;
int main (){
    int i=1;
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    while (i<=n ){
        int j=1;
        int count =i;
        
        while (j<=i){
            // cout << count;
           char ch='A'+count-1;
           cout << ch;
            j=j+1;
        }
        i=i+1;
        cout << endl;

    }
}