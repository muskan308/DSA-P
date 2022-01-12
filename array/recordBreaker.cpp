//Question from Google Kickstart
/* Record breaker is an element which is greater than all the elements of smaller index and also greater than the element at immediate next index*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//function to find number of record breaker days
int find_recordBreaker(int arr[], int n){
    int count = 0;
    int max1 = 0;
    for(int i = 0 ;i < n ; i++){
        if(i == 0){
            if(arr[i] > arr[i+1]){
                count++ ;
        }}
        else if(i == n-1){
            if(arr[i] > max1)
                count++;
        }
        else{
            if(arr[i] > max1){
                if(arr[i] > arr[i+1]){
                    count++;
                }
            }
        }
        max1 = max(max1, arr[i]);
    }
    return count;
}

//main working function
int do_main(int test){
 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    if(n == 1)
        cout << "Case #"<<test<<": "<<1 <<"\n";
    else    
        cout << "Case #"<<test<<": "<<find_recordBreaker(arr, n) <<"\n";
}


int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int test;
    cin >> test;
    for(int i = 1 ; i <= test; i++){
        do_main(i);
    }
    return 0;

}
