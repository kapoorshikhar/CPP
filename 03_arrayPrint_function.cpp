#include<iostream>
using namespace std;

 void printArray(int arr[], int n){
    cout << "The Execution of Funcation begins here. "<< endl;
    for (int i=0; i< n; i++){
        cout<< " "<< arr[i];
    }
    cout << " Execution Ends";
}

int main (){
    int numb[5]={1,2,3,4};
    int n =5;
    printArray(numb,5);
    return 0;
}




   