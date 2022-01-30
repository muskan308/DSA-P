#include <iostream>

using namespace std;

string KeyPad[] = {"","","abc","def","ghi","jkl","mno","pqr","stuv","wxyz"};

void keyPad(string s, string ans){
    if(s.length()==0){
        cout << ans<<"\n";
        return;
    } 

    char ch = s[0];
    for(int i = 0 ; i < KeyPad[ch-'0'].length(); i++){
         keyPad(s.substr(1), ans+KeyPad[ch-'0'][i] );
         //cout << "\n";
    }

}
int main(){
    string s = "23";
    keyPad(s,"");
    return 0;
}