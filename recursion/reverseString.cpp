//Reverse a given string using recursion
#include <iostream>
#include <string.h>
using namespace std;

void rev(string s){//printing the reverse string
    if(s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    rev(ros);
    cout << s[0];
}

void change(string s){//printing 3.14 in place of pi
    if(s.length()==0) return;
    if(s[0] == 'p' && s[1]=='i'){
       cout <<"3.14";
        change(s.substr(2));
    }
    else{
        cout << s[0];
        change(s.substr(1));
    }
   
}

int main(){
    string s;
    cin >> s;
    //cout << s.substr(1)<<"\n"
    change(s);
    return 0;
}