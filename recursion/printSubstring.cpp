#include <iostream>
#include <string.h>
using namespace std;

void printSubstring(string s, string ans){
    if(s.length()==0){
        cout << ans<<endl;
        return ;
    }
    char ch = s[0];
   
    printSubstring(s.substr(1), ans);
    printSubstring(s.substr(1), ans+ch);
    // cout << ans<<"\n";
    
}
int main(){
    printSubstring("abc","");
    return 0;
}