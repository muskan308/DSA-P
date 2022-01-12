/*A subarray is a contiguous part of array. An array that is inside another array. 
For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
 The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4).*/
#include<iostream>
using namespace std;

void do_main(){
int n, val;
cin >> n >> val;
int arr[n];
for(int i = 0 ; i < n; i++){
      cin >> arr[i];
}
int st = 0, en = 0, currSum = arr[0];
while(1){
        
	if(currSum < val){
		en++;
		currSum += arr[en];//15
    }
	else if(currSum == val){
		cout << st << " " << en;
		break; 
	}
	else{
		currSum -= arr[st];
		st++;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int test;
	cin >> test;
	while(test--){
   		do_main();
		}
	 return 0;
}

