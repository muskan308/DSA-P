/**
 * @file printingSubArray.cpp
 * @author Muskan
 * @date 2022-01-21 
 */

/*Printing SubArray using Bit Manipulation*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,50};
    int n = 5;
    for(int i = 0 ; i < 1<<n ; i++){ // till 2^n
        for(int j = 0 ; j < n ; j++){
            if(i & (1 << j)){ //checks if the jth bit is set in number i
                cout << arr[j] <<" ";
            }  
        }cout << "\n";
    }
    return 0;
}