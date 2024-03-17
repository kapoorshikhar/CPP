#include<iostream>
using namespace std;

void swapArray(int arr[], int n){
    int r=n;
    for(int i=0; i<n ;i++){
             
        if (i+1<n){
            swap(arr[i], arr[r-1]);
            r--;
            cout<< " "<< r;
        }
        
    }
    cout << "The array is swapped : "<< endl;
}
void printArray(int arr[],int n){
    for (int i=0;i<n; i++){
        cout<< " "<< arr[i];
    }
    cout<< endl<<" Array Element bieng printed. "<<endl;
}   



int main (){
     int arr[5]  = {1,2,3,4,5}; 
     swapArray(arr,5) ;  
     printArray(arr,5) ;  
     return 0;
}
