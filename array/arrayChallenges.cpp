/*A subarray is a contiguous part of array. An array that is inside another array. 
For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
 The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4).*/

#include<iostream>
using namespace std;

//printing maximum among first ith elements
void printMax(int arr[], int n){
    int max = arr[0];
    for(int i = 0 ;i < n ; i++){
        max = (max >= arr[i] ? max : arr[i]);
        cout << max <<" ";
    }
}

//printing subarrays
void printSubArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
           for(int k = i; k <= j ; k++){
               cout << arr[k]<<" ";
           } cout << "\n";
        }
       
    }
}

//printing sum of subarrays
void printSum(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
           for(int k = i; k <= j ; k++){
               cout << arr[k] <<" ";
               sum += arr[k];
           }cout << "--" <<sum<<" "; cout << "\n";
        }
       
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
    for(int i = 0 ;i < n ; i++){
        cin >> arr[i];
    }
    printSum(arr, n);
    return 0;
}
