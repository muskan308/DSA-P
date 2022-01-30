#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void permute(vector<int> &vp, int in){ //algorithmically
    if(vp.size() == in){
        ans.push_back(vp);
        return;
    }
    else{
        for(int i = in; i < vp.size(); i++){
            if(i!=in && vp[i] == vp[in])continue;
            swap(vp[i],vp[in]);
            
            permute(vp, in+1);
           // swap(vp[i],vp[in]);
        }
    }
}

void permutation(vector<int> &vp){ //using STL
    sort(vp.begin(), vp.end());
    do{
        ans.push_back(vp);
    }while(next_permutation(vp.begin(), vp.end()));  //using next_permutation STL function
}


int main(){
    vector<int> vp = {1,2,2};
    sort(vp.begin(), vp.end());
    permute(vp,0);
    for(auto x : ans){
        for(int i = 0 ; i  < x.size() ; i++){
            cout << x[i] <<" ";
        }cout << endl;
    }
    return 0;
}