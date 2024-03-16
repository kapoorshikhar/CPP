#include<iostream>
using namespace std;
int main (){
    int i ;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int num[10];
    cout<< " Enter the element : ";
    for (i=0;i<n;i++){
        cin >> num[i];

    }
    cout << "The array is as following "<<endl;
    for(int i=0;i<n;i++)
    cout << num[i];
    return 0;
}