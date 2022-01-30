#include <iostream>
using namespace std;

int maxValue(int values[], int weight[], int n,int w){
    if(w==0 || n==0){
        return 0;
    }
    if(weight[n-1] > w){
        return maxValue(values, weight, n-1,w);
    }
    return max(maxValue(values, weight, n-1, w-weight[n-1]) + values[n-1] , maxValue(values, weight, n-1,w) );
}

int main(){
    int values[]= {50, 300};
    int weight[] = {10, 5};
    cout << maxValue(values, weight, 2, 10);
    return 0;
}