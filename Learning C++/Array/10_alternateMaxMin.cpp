#include<iostream>
using namespace std ;

int getMax(int arr[], int n){
    int maxi=INT_MIN;
    for (int i=0; i< n ; i++){
        maxi=max (maxi,arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int n){
    int mini=INT_MAX;
    for (int i=0; i< n ; i++){
        mini=min (mini,arr[i]);
    }
    return mini;
}
int main (){
    int arr [5]={1,4,6,7,8};
    cout<< " Max Number is : "<<getMax(arr,5)<<endl;
       cout<< " Min Number is : "<<getMin(arr,5)<<endl;
    
    return 0;
}
