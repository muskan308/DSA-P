#include<iostream>
#include<climits>

using namespace std;

int linearSearch(int a[], int n, int key){
    for(int i = 0 ;i < n ; i++){
        if(a[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int a[], int start, int end, int key){
    if(start <= end){
        int mid = start + (end-start)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(key < a[mid]){
             return binarySearch(a, start, mid-1, key);
        }
        
        return binarySearch(a, mid+1, end, key);
        
    }
    return -1;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    // cout << linearSearch(arr, n, key);
    cout << binarySearch(arr, 0, n-1, key);
    return 0;
}
