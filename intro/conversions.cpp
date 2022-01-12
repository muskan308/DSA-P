#include<bits/stdc++.h>
using namespace std;

//binary to decimal
int bin_to_deci(int a){
    int i = 0, num = 0;
    while(a > 0){
        int rem = a%10;
        num = num+ (pow(2,i) * rem);
        a /= 10;
        i++;
    }
    return num;
}

//octal to decimal
int oct_to_deci(int a){
    int i = 0, num = 0;
    while(a > 0){
        int rem = a%10;
        num = num+ (pow(8,i) * rem);
        a /= 10;
        i++;
    }
    return num;
}

//hexadecimal to decimal
int hex_to_deci(string a){
    int size = a.size();
    int num = 0, j =0;
    for(int i = size-1; i >= 0 ; i--,j++){
        if(a[i] >= '0' && a[i] <= '9')
            num = num + (pow(16,j) * (a[i] - '0'));
        else if(a[i] >= 'A' && a[i] <= 'F')
            num = num + (pow(16,j) * (a[i] - 'A' + 10)); //'A' - 'A' gives 0 adding 10 makes the value of 'A' 10
                                                        //lly, 'B'-'A' gives 1 adding 10 makes B's value 11
    }
    return num;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string a;
    int b, c;
    cin >> a;
    cin >> b >> c;
    
    cout << hex_to_deci(a) <<"\n";
    cout << bin_to_deci(b) <<"\n";
    cout << oct_to_deci(c) <<"\n";
    return 0;
}