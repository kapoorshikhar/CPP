#include<iostream>
using namespace std;

int binarySearch(int arr[],int key, int size ){
    
    int start=0;    
    int end =size-1;
    int mid =(start+end)/2;

    while (start<= end){
    
        if (arr[mid]==key){
            return mid;
        }
        else if (key>arr[mid]){
           start=mid+1;
        }
        else  {
            end=mid-1;
        }
        mid =start+(start-end)/2;
    }
    return -1;   
}

int main (){
    int testArray[6]={1,2,3,4,5,6};
    int ans =binarySearch(testArray,5,6);
    cout <<" The element is on the index"<<ans;
    return 0;
}

