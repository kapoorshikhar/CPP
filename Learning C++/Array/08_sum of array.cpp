#include<iostream>
using namespace std;
void sumarray(int arr[], int n){
        int s=0;
        for (int i=0; i<n;i++){
            s=s+ arr[i];
        }
     cout<< "The sum is : "<< s;
    
}  

int main(){
    int arr[6]={1,2,3,4,5,6};
    sumarray(arr, 6);
    return 0;
}
