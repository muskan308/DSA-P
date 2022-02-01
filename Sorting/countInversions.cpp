#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> vp; 

int Merge(int arr[], int low, int mid, int high){
    
    int n = mid-low+1;
    int m = high-mid;
    int *leftArr = new int[n];
    int *rightArr = new int[m];
    for(int i = 0 ; i < n ; i++){
        leftArr[i] = arr[i+low];
    }
    
    for(int i = 0 ; i < n ; i++){
        rightArr[i] = arr[i+mid+1];
    }

    int inversions = 0;
    int i = 0, j = 0;
    int k = low;
    while(i < n && j < m){
        if(leftArr[i] < rightArr[j]){
            arr[k] = leftArr[i];
            i++;k++;
        }
        else{
            arr[k] = rightArr[j];
            vp.push_back(make_pair(leftArr[i],rightArr[j]));
            inversions += n-i;
            int x = i+1;
            while(x < n){
                vp.push_back(make_pair(leftArr[x],rightArr[j]));
                x++;
            }
            j++;k++;
        }
    }

    while(i < n){
        arr[k] = leftArr[i];
        i++;k++;
    }

    while(j < m){
        arr[k] = rightArr[j];
        j++;k++;
    }

    return inversions;
}

int countInversions(int arr[], int low, int high){
    int inv = 0;
    if(low < high){
        int mid = (low+high)/2;
        inv += countInversions(arr, low, mid);
        inv += countInversions(arr, mid+1, high);

        inv += Merge(arr, low, mid, high);
    }
    return inv;
}

int main(){
    int arr[] = {3,5,6,9,1,2,7,8};
    int n = sizeof(arr)/sizeof(int);
    
    cout << "total inversions: " << countInversions(arr, 0, n-1)<<" \n";

    for(auto x: vp){
        cout << x.first <<", " << x.second<<"\n";
    }

    return 0;
}