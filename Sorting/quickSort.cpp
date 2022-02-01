#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];

    int i = low-1;
    for(int j = low ; j < high ; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;

}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}
int main(){
    int arr[] = {23,54,3,44,7,1,67,2,19};
    quickSort(arr,0,8);

    for(int i = 0 ;i < 9; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}

