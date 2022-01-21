/**
 * @file findingNonDuplicates.cpp
 * @author Muskan
 * @date 2022-01-21
 */

/*
    Given an array of duplicate numbers, find two numbers which dont have duplicates
*/

#include <iostream>
using namespace std;

bool checkBit(int n, int pos){
    return (n & (1 << pos));
}
void unique(int arr[], int n){
    //first find the xor of all the numbers
    int xorsum = 0;
    for(int i = 0 ; i< n ; i++){
        xorsum ^= arr[i];
    }

    //we will get the xor of two duplicates
    //Now find the position of the least significant set bit of xorsum //010
    int pos = 0;
    int tempxor = xorsum;
    while(xorsum){
        if(xorsum & 1) break;
        xorsum = xorsum >> 1;
        pos++;  
    }

    //xor of all the elements having set bit at position pos gives one of the non duplicate element
    int newxor = 0;
    for(int i = 0 ; i < n ; i++){
        if(checkBit(arr[i], pos)) {
            newxor ^= arr[i];
        }
    }
    cout << newxor <<" ";
    cout << (newxor^tempxor) ; //gives another non duplicate
    }

int main(){
    int arr[]  = {1,2,3,1,2,3,5,7};
    unique(arr, 8);
    return 0;
}