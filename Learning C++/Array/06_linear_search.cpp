#include<iostream>
using namespace std;

bool search(int arr[],int n, int key){
    
    for(int i=0;i<=n;i++){
        if (arr[i]==key){
            return 1;
        }
    }return 0;
    
}
int main (){
    
    int key;
    cout<< " Enter the value of key : ";
    cin >> key;
    int arr[5]= {10,20,30,40,50};
   int n=5;
    bool found =search(arr ,3, key);
    
    if (found){
        cout << " Key is Present "<< endl;
    }
    else{
        cout << " Key is Absent "<< endl;
    }

    

    return 0;

}
