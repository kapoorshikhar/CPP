#include<iostream>
using namespace std;

bool search(int arr[],int n, int key){
    
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return 1;
        }
    }return 0;
    
}
int main (){
    
    int key;
    int arr[5];
    int n=5;
    cout<< " Enter the value of array : ";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<< " Enter the value of key : ";
    cin >> key;
    bool found =search(arr ,5, key);
    if (found){
        cout << " Key is Present "<< endl;
    }
    else{
        cout << " Key is Absent "<< endl;
    }

    

    return 0;

}