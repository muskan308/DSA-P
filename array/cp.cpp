/*Written by Muskan*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void input(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
}

//Max arithmetic Sub Array
/* In arithmatic Array difference between all the adjacent ele,ents are 
same.
E.g -- [1,2,3,4] -- difference of 1,
       [1,3,5,7] -- difference of 2*/
int MaxArithmaticSubArray(int arr[], int n){
    int max =2, dif1 = arr[0] - arr[1], curr = 2;
    for(int i = 0 ; i < n ; i++){
        if(dif1 == (arr[i] - arr[i+1])){ //checks if the difference is same
            curr ++;
        }
        else{
            curr = 2;
        }
        max = (max >= curr? max : curr); //maintains the max size of arithmetic subarray
        dif1 = arr[i] - arr[i+1];//maintains the previous difference
        
}
return max;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        input(arr,n);
        cout << MaxArithmaticSubArray(arr, n);
    }
}