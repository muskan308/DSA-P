#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int const MOD = 1000000007;
struct eq{
	int x, y, gcd;
};

ll power(int p, int c){
	if(c==0) return 1;
	
	return (2*(power(p,c-1))%MOD)%MOD;	
}

eq extendedEuclid(int a, int b){
	if(b==0){
		eq ans;
		ans.x = 1;
		ans.y = 0;
		ans.gcd = a;
		return ans;
	}
	
	eq prev = extendedEuclid(b,a%b);
	eq ans;
	ans.x = prev.y;
	ans.y = prev.x - (a/b) * prev.y;
	ans.gcd = prev.gcd;
	
	return ans;
}

int main(){
	int tes;
	cin >> tes;
	while(tes--){
		int N;
		cin >> N;
		ll twoPowerN = power(N,N)-1;

		ll P = power((twoPowerN)%MOD,(twoPowerN)%MOD);
	
		eq ans = extendedEuclid((twoPowerN)%MOD, MOD);
		cout << (P * ans.x )%MOD;
	}
	
	return 0;
}
