#include <iostream>
using namespace std;
//Put 0, 1, 2 in sorted order

void DNFSort(int arr[], int n){
    int low = 0, mid = 0, high = n-1;
    while(mid < high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }

}

int main(){
    int arr[] = {0,1,1,0,2,1,0,2};
    int n = sizeof(arr)/sizeof(int);
    DNFSort(arr, n);
    for(int i = 0 ;i < n ; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}