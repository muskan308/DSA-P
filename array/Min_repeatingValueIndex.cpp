/*To find the index of the element which has minimum index among all repeating elements*/
/*Approach -
	Make an array A of size with the greatest element in the given array.
	Set -1 to all index. Change the value of A[a] from -1 to the index of a in given array.
	If value of A[i] != -1, output the value of A[i].That will print the index of i in the given array.
*/
#include<iostream>
#include<climits>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n; //input array size
    int arr[n];
    int max = INT_MIN;  //initializing the max with minimum value
    
    for(int i = 0 ;i < n ; i++){
        cin >> arr[i];
        max = (max > arr[i] ? max : arr[i]);
    }
    
    int A[max+1]; //new array 
    for(int i = 0 ; i < max+1; i++){ //initializing the array with -1 
        A[i] = -1;
    }
    int min = n;
    for(int i = 0 ;i < n ; i++){
        if(A[arr[i]] == -1){
            A[arr[i]] = i;
        }else{
            min = (min < A[arr[i]] ? min : A[arr[i]]);  //update the min index value that is repeated
        }
    }
    if(min == n){ //if min is not updated --- no element is repeated
        cout << -1 << "\n";
    }
    else
        cout << min+1;
    return 0;
}
