/*
    Given an array which contains three duplicates of each number except an unique number which does not have any duplicate. Find that number
*/
#include <iostream>
using namespace std;

bool checkBit(int n, int pos){
    return (n & (1<<pos));
}

int setBit(int n , int pos){
    return (n | (1<<pos));
}

int unique(int arr[], int n){
    int result = 0;
    for(int i = 0 ;i < 64 ; i++){
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            if(checkBit(arr[j], i)){
                sum ++;
            }
        }
        if(sum % 3){
            result = setBit(result, i);
        }
    }
    return result;
}

int main(){
    int arr[] = {1,2,3,1,8,3,2,1,2,3};
    cout << unique(arr, 10);
    return 0;
}