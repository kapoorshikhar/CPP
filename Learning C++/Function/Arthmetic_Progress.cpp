#include<iostream>
using namespace std;

int arthmeticProgession(int n ){
    int d =3*n+7;
    cout << " The number is "<< d;
    return d;
}

 

int main (){
    int n;
    cout << " Enter the  nth to be calculated : ";
    cin >> n;
    arthmeticProgession(n);
}