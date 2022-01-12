#include<bits/stdc++.h>
using namespace std;
//reverse a number
int reverse(int a){
    int num = 0, rem;
    while(a != 0){
        rem = a %10;
        num = num*10 + rem;
        a /= 10;
    }
    return num;
}
//armstrong number check
bool armstrong(int a){
    int rem, sum = 0, b = a;
    while(a > 0 ){
        rem = a%10;
        sum += pow(rem,3);
        a /= 10;
    }
    return (sum == b);
}

//fibonacci series
int fibo(int a){
    if(a == 1 || a == 0){
        return a;
    }
    return (fibo(a-1) + fibo(a-2));
    
}

//factorial function

int fact(int a){
    if(a <= 1){
        return 1;
    }
    return (fact(a-1)*a);
}
//finding nCr (combination without arrangement)
//finding no. of ways to select r books from n books(Combination)
int nCr(int n, int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}

//permutation (arrangement matters)
int nPr(int n, int r){
    return (fact(n)/fact(n-r));
}

//pascal's uding factorial
void pascals(int a){
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < a-i ; j++){
            cout <<" ";
        }
        for(int j = 0 ; j <= i ;j++){
            cout << nCr(i,j)<< " "; //each term is iCj i.e nCr(i,j)
        }
        cout << "\n";
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a , b;
    cin >> a ;
    pascals(a);

    return 0;
}