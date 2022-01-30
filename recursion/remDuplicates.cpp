#include <iostream>
using namespace std;

string remDuplicate(string s){ //removing duplicates from string
    if(s.length() == 0){
        return "";
    }
    char c = s[0];
    string ans = remDuplicate(s.substr(1));
    if(c == ans[0]){
        return (ans);
    }
    else{
        return c+ans;
    }
}

string addxToEnd(string s){//adding all xs to end
    if(s.length()==0){
        return "";
    }

    char c = s[0];
    string ans = addxToEnd(s.substr(1));
    if(c == 'x'){
        return ans+c;
    }
    else{
        return c+ans;
    }

}
int main(){
    cout << addxToEnd("xbghxxxxghbbux");
    return 0;
}