#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;


bool isSafe(vector<vector<int>> &vp, int i, int j, int n){
    int x = 0, flag = 1;
    while(x < i ){
        if(vp[x][j] == 1){
            return false;
        }x++;
    }

    int m = i, l = j;
    while(m >=0 && l >= 0){
        if(vp[m][l]==1){
            return false;
        }m--;l--;
    }

    m = i, l = j;
    while( m >=0 && l < n){
        if(vp[m][l]==1){
            return false;
        }m--;l++;
    }
    return true;
}

bool nQueen(int n , int  i, vector<vector<int>> &vp){
    if(i == n){
        return true;
    }
    int j = 0;
    while(j < n){
        if(isSafe(vp, i, j, n)){
            vp[i][j] = 1;
            if(nQueen(n, i+1, vp)){
                return true;
            }
            vp[i][j] = 0;
        }
        j++;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> vp(n,vector<int>(n,0));
   
    if(nQueen(n, 0, vp)){
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n ; j++){
                cout  << vp[i][j]<<" ";
            }cout << endl;
        }
    }
    return 0;
}