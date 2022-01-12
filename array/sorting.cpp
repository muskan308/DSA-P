#include<iostream>
#include<climits>

using namespace std;

void selectionSort(int arr[], int n){
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i ; j < n ; j++){
                if(arr[j] < arr[i])
                    swap(arr[j], arr[i]);
            }
            
        }
}

void BubbleSort(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void InsertionSort(int arr[], int n){
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i], j = i;
        while(j > 0 && temp <= arr[j-1]){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = temp;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    InsertionSort(arr, n);

    for(int i = 0; i < n ; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}