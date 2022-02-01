#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int h){
    int n = mid-l+1;
    int m = h-mid;
    int first[n];
    int second[m];
    for(int i = 0 ; i < n ; i++){
        first[i] = arr[l+i];
    }
    for(int i = 0 ; i < m ; i++){
        second[i] = arr[mid+1+i];
    }
    int i = 0, j = 0;
    int k = l;
    while(i < n && j < m){
        if(first[i] < second[j]){
            arr[k] = first[i];
            i++;k++;
        }else{
            arr[k] = second[j];
            j++;k++;
        }
    }

    while(j < m){
        arr[k] = second[j];
        k++;j++;
    }
    
    while(i < n){
        arr[k] = first[i];
        k++;i++;
    }
}

void mergeSort(int arr[], int i, int j){
    if(i < j){
        int mid =  (i+j)/2;
        mergeSort(arr, i, mid);
        mergeSort(arr, mid+1, j);

        Merge(arr, i,mid, j);
    }
}

int main(){

    int arr[] = {23,45,3,21,67,12,1};
    mergeSort(arr, 0, 6);

    for(int i = 0 ;i < 7 ; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}