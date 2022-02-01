#include <iostream>
#include <vector>
using namespace std;

//algorithm works by finding the position of each element
void countSort(int arr[], int n){ 
    int maxNum = arr[0];
    for(int i = 0;i < n ; i++){
        maxNum = max(maxNum, arr[i]);
    }

    vector<int> countElement(maxNum+1, 0);

    for(int i = 0 ; i < n ; i++){
        countElement[arr[i]] += 1;
    }

    for(int i = 1 ; i <= maxNum ; i++){
        countElement[i] += countElement[i-1];
    }

    vector<int> temp(n);

    for(int i = n-1 ; i >= 0; i--){
        temp[--countElement[arr[i]]] = arr[i];
    }

    for(int i =0 ; i< n ; i++){
        arr[i] = temp[i];
    }


}

int main(){
    int arr[]= { 34,2,3,55,65,2,3};
    countSort(arr, 7);

    for(int i = 0; i < 7 ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}