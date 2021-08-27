#include<bits/stdc++.h>
typedef unsigned long long ll;

ll lol(ll x) {
	if(x == 1) return 2;
	ll res = 1;
	ll f = 2;
	while(x) {
		if(x & 1) res *= f;
		f *= f;
		x /= 2;
	}
	return res;
}

int main() {
	ll N;
	scanf("%llu",&N);
//	int j = 1;
	printf("%llu\n",2*(lol(N)-1));
}
