#include <iostream>
using namespace std;

void waveSort(int arr[], int n){
    for(int i = 1; i <  n-1 ; i+=2){
        if(!(arr[i] > arr[i+1])){
            swap(arr[i], arr[i-1]);
        }
        if(!(arr[i] > arr[i+1])){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int arr[] = {12,3,4,5,21,8,90};
    int n = sizeof(arr)/sizeof(int);
    waveSort(arr, n);
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}