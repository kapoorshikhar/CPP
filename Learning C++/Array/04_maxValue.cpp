#include<iostream>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;
    for(int i =0; i< n ;i++){
        if (num[i]< min){
            min = num[i];
        }
        
    }
    return min;
}

int getMax(int num[], int n){
    int max=INT_MIN;
    for(int i =0; i< n ;i++){
        if (num[i]> max){
            max = num[i];
        }
        
    }
    return max;
}

int main (){
    int arr[4]={1,20,3,40};
    cout << " Max Num is :"<<getMax(arr,4)<< endl;
    cout << " Min Num is :"<<getMin(arr,4)<<endl;
}
